#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define MAX 1000000007
#define pb push_back	
#define mp make_pair
int main()
{   ios_base::sync_with_stdio(false);
	ll t,i,n,index,pos,temp=1;
	cin>>t;
	while(t--)
	{
		double n,k,upper,low,x,ans,a,b,c,s,sum=0;
		cin>>s>>a>>b>>c;
		sum=a+b+c;
		if(s>=sum)
		cout<<"1\n";
		else if(s>=(a+b) or s>=(b+c))
		cout<<"2\n";
		else
		cout<<"3\n";
	}
}
