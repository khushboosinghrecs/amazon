long long maxArea(long long A[], int len)
{
    // Your code goes here
    long long int l = 0;
    long long int r = len -1;
    long long int area = 0;
     
    while (l < r)
    {
        // Calculating the max area
        area = max(area, min(A[l],
                        A[r]) * (r - l));
                         
            if (A[l] < A[r])
                l += 1;
                 
            else
                r -= 1;
    }
    return area;
}
