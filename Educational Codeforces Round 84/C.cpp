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
	ll n,m,k;
	cin>>n>>m>>k;
	for(int i=0;i<k;i++)
	{
	    ll x,y;
	    cin>>x>>y;
	}
	string ans="";
	for(int j=0;j<m-1;j++)
	{
	   ans+='L';
	}
	for(int j=0;j<n-1;j++)
	{
	   ans+='U';
	}
	for(int i=0;i<n;i++)
	{
	    if(i%2==0)
	    {
	        for(int j=0;j<m-1;j++)
	        {
	            ans+='R';
	        }
	    }
	    else
	    {
	        for(int j=0;j<m-1;j++)
	        {
	            ans+='L';
	        }
	    }
	    if(i<n-1)
	    {
	        ans+='D';
	    }
	}
	ll r=ans.length();
	cout<<r<<endl;
	cout<<ans<<endl;
}
int main() 
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}
