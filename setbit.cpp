int isBitSet(int N){
        // code here 
        int x=(int)log2(N);
        if(N==(pow(2, x+1)-1))
        {
            return 1;
        }
        return 0;
        
    }
