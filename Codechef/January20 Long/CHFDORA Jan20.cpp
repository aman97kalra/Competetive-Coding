#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define MAX 1000000007
#define pb push_back	
#define mp make_pair

ll palindrome()
{
		ll n,m,i,j,ans=0,top,bottom,left,right;
		cin>>n>>m;
		ll v[n][m];
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				cin>>v[i][j];
			}
		}
		
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				ll top=i;
				ll bottom=i;
				ll left=j;
				ll right=j;
				while( left>=0 and right<m and top>=0 and bottom<n and v[i][left]==v[i][right] and v[top][j]==v[bottom][j])
				{
					ans++;
					top--;
					bottom++;
					left--;
					right++;
				}
			}
		}
		return ans;
}
int main()
{   ios_base::sync_with_stdio(false);
	ll t;
	cin>>t;
	while(t--)
	{
		cout<<palindrome()<<'\n';
	}
	return 0;
}
