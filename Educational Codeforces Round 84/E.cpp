/*love_for_code*/
/*code_for_love*/
//Code_written_by: @AMIT KUMAR;
#define ll long long int
#define ull unsigned long long int
#define MODM 998244353
#define MODS 10000007
#define INF 2000000000000000000LL
#include <bits/stdc++.h>
using namespace std;
ll power[200005];
int solve()
{
    ll n;
    cin>>n;
	power[0]=1;
	for(int i=1;i<=n;i++)
	{
		power[i]=power[i-1]*10%MODM;
	}
	for(int i=1;i<n;i++) 
	{
		ll ans=81*(n-i-1)*power[n-1-i]%MODM;
		ans=(ans+18*power[n-i])%MODM;
		cout<<ans<<" ";
	}
	cout<<10<<endl;
}
int main() 
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}
