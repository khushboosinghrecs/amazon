class Solution{
public:	
	
	string firstAlphabet(string S)
	{
	    // Your code goes here
	    int n=S.length();
	    string str;
	    for(int i=0; i<n; i++)
	    {
	        if(i==0)
	        {
	            str=str+S[i];
	        }
	        if(S[i-1]==' ')
	        {
	            str=str+S[i];
	        }
	    }
	    return str;
	}
};
