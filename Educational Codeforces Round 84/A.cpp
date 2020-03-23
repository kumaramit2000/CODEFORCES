/*love_for_code*/
/*code_for_love*/
//Code_written_by: @AMIT KUMAR;
#define ll long long int
#define ull unsigned long long int
#define MODM 1000000007
#define MODS 10000007
#define INF 2000000000000000000LL
#include <bits/stdc++.h>
using namespace std;
int solve()
{
	ll n,k;
	cin>>n>>k;
    if(n<k*k||(n-k)%2!=0)
    {
        cout<<"NO";
    }
    else
    {
        cout<<"YES";
    }
}
int main() 
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	ll t;
	cin>>t;
	while(t--)
	{
	   solve();
	   cout<<endl;
	}
}
