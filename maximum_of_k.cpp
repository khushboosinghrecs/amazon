vector <int> max_of_subarrays(int *arr, int n, int k){
    int i;
    vector<int> v;
     std::deque<int> Qi(k);
    for (i = 0; i < k; ++i) 
    {
        while ((!Qi.empty()) && arr[i] >=arr[Qi.back()])
            Qi.pop_back();
        Qi.push_back(i);
    }
    for (; i < n; ++i) 
    {
        v.push_back( arr[Qi.front()]);
 
        while ((!Qi.empty()) && Qi.front() <= i - k)
            Qi.pop_front(); 
        while ((!Qi.empty()) && arr[i] >= 
                             arr[Qi.back()])
            Qi.pop_back();
        Qi.push_back(i);
    }
 
    v.push_back(arr[Qi.front()]);
    return v;
}
