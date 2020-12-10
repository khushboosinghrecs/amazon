 int findPeakElement(vector<int>& a) 
    {
        // Code here.
        int n=a.size();
        int mx=a[0];
       // cout<<n<<'\n';
        for(int i=1; i<n; i++)
        {
            if(a[i]>mx)
            {
                mx=a[i];
            }
        }
        return mx;
    }
