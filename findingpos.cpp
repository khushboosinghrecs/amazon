#include <iostream>
#include<cmath>
using namespace std;

int main() {
	//code
	int t; cin>>t;
	while(t--)
	{
   int	 n;
	cin>>n;
	int r=(int)log2(n);
	int rs=pow(2, r);
	cout<<rs<<'\n';
	}
	return 0;
}
