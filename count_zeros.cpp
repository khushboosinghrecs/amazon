class Solution{   
public:
int bn(int arr[], int l, int h )
{
    if(h>=l)
    {
        int mid=l+(h-l)/2;
         if ((mid == 0 || arr[mid - 1] == 1) &&  
                         arr[mid] == 0)
                         return mid;
        if(arr[mid]==1)
        {
            return bn(arr, mid+1, h);
        }
        return bn(arr, l, mid);
    }
    return -1;
}
    int countZeroes(int arr[], int n) {
        // code here
     if(bn(arr, 0, n)!=-1)
    return  n-bn(arr, 0, n);
    else
    {
        return 0;
    }
    }
};
