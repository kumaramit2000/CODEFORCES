/*love_for_code*/
/*code_for_love*/
//Code_written_by: @AMIT KUMAR;
#define ll long long int
#define ull unsigned long long int
#define MODM 998244353
#define MODS 10000007
#define pb push_back
#define INF 2000000000000000000LL
#include <bits/stdc++.h>
using namespace std;
vector<int> g[100000];
bool b[100000], c[100000];
int solve()
{
    ll n;
    cin>>n;
	memset(b,0,n);
	memset(c,0,n);
	for(int i=0;i<n;i++) 
	{
		g[i].clear();
		int k;
		cin>>k;
		for(int j=0;j<k;j++)
		{
			ll x;
			cin>>x;
			x--;
			g[i].pb(x);
		}
	}
	int ans=0;
	for(int i=0; i<n; ++i) 
	{
			bool ok=0;
			for(int j=0; j<g[i].size(); ++j) 
			{
				if(!c[g[i][j]]) 
				{
					c[g[i][j]]=1;
					ok=1;
					++ans;
					break;
				}
			}
			b[i]=ok;
		}
		if(ans>=n) 
		{
			cout << "OPTIMAL\n";
		} 
		else 
		{
			cout << "IMPROVE\n";
			int i=0, j=0;
			while(b[i])
				++i;
			while(c[j])
				++j;
			cout << i+1 << " " << j+1 << "\n";
		}
}
int main() 
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	ll t;
	cin>>t;
	while(t--)
	solve();
}
