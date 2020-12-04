
class Solution{
public:
    int mthHalf(int N, int M)
    {
        // code here
        if(M==1)
        return N;
        return mthHalf(N/2, M-1);
    }
};
