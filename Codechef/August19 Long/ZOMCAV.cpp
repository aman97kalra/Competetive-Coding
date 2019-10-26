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
		ll n,k,upper,lower,x,ans,temp=0,flag=0;
		cin>>n;
		vector<ll>c(n),h(n),prefix(n);
		prefix.resize(n,0);
		for(i=0;i<n;i++)
		cin>>c[i];
		for(i=0;i<n;i++)
		cin>>h[i];
		for(i=0;i<n;i++)
		{
			lower=max((i-c[i]),temp);
			upper=min((i+c[i]),n);
		//	cout<<lower<<" "<<upper<<'\n';
			prefix[lower]++;
			if(upper<n-1)
			{
				prefix[upper+1]--;
			}
		}
		for(i=1;i<n;i++)
		{
			prefix[i]+=prefix[i-1];
			//cout<<prefix[i]<<" ";
		}
		sort(prefix.begin(),prefix.end());
		sort(h.begin(),h.end());
		for(i=0;i<n;i++)
		{
			if(h[i]!=prefix[i])
				flag=-1;
		}
		(flag==-1)?cout<<"NO\n":cout<<"YES\n";
	}
}
