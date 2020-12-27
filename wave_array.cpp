void convertToWave(int *arr, int n){
    
    // Your code here
    for(int i=0; i<n; i=i+2)
    {
        if(i!=n-1)
        swap(arr[i], arr[i+1]);
    }
    
}
