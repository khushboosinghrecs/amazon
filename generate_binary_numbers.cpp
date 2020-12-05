     string fun(long long n)
{
    string s="";
    while(n)
    {
        int temp=n%2;
        s=s+to_string(temp);
        n=n/2;
    }
    reverse(s.begin(), s.end());
    return s;
}

vector<string> generate(long long N)
{
	// Your code here
	vector<string> vrr;
	for(long long i=1;i<=N; i++)
	{
	    string str=fun(i);
	    vrr.push_back(str);
	}

    return vrr;
}
