int maxSubarraySum(int arr[], int n){
    
    // Your code here
    int mxsum=0;
    int currsum=0;
    int res=0;
    for(int i=0; i<n; i++)
    {
        currsum=currsum+arr[i];
        
    if(currsum<0)
    currsum=0;
    if(currsum>mxsum)
    {
        mxsum=currsum;
    }
    }
    return mxsum;
    
}
