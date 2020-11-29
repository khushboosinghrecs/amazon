#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t; cin>>t; 
	while(t--)
	{
	    string s; cin>>s;
	    sort(s.begin(), s.end(), greater<char>() );//nlon
	    int ans=0;
	    int temp;
	    bool b=false;
	    stack<char> stk;
	    string ansstr ="";
	    for(int i=0; i<s.length(); i++)
	    {
	        stk.push(s[i]);
	    }
	    while(!stk.empty())
	    {
	        if(isdigit(stk.top())==true)
	        {
	           
	            temp=stk.top()-'0';
	          //  cout<<temp<<"jkj";
	            ans=ans+temp;
	            stk.pop();
	            b=true;
	        }
	        else{
	            ansstr= ansstr+stk.top();
	            stk.pop();
	        }
	    }
	  //  cout<<ans<<" "<<(char)ans;
	    if(b==true)
	    {
	       ansstr=ansstr+to_string(ans);
	    }
	    cout<<ansstr<<'\n';
	    
	}
	return 0;
}
