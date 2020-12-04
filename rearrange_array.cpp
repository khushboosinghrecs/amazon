void arrange(long long arr[], int n) {
    // Your code here
    long long brr[n];
    for(int i=0; i<n; i++)
    {
        brr[i]=arr[i];
    }
    for(int i=0;i<n; i++)
    {
       arr[i]=brr[brr[i]];
    }
    
}
