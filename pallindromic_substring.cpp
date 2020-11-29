class Solution{
public:	
	
	
	int isPlaindrome(string s)
	{
	    // Your code goes here
	    int n=s.length();
	    for(int i=0, j=n-1; i<n/2, j>=n/2; i++, j--)
	    {
	        if(s[i]!=s[j])
	        {
	            return 0;
	        }
	    }
	    return 1;
	}

};
