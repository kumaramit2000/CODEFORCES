/*love_for_code*/
/*code_for_love*/
//Code_written_by: @AMIT KUMAR;
#define ll long long int
#define ull unsigned long long int
#define MODM 998244353
#define pb push_back
#define MODS 10000007
#define INF 2000000000000000000LL
#include<bits/stdc++.h>
using namespace std;
// Compute (x^y)%p in O(log y)

ll power(ll x, ll y)  
{ 
    ll res=1;       
    x=x%MODM; 
    if(x==0)
    {
        return 0;
    }
    while(y>0)  
    {   
        if(y&1)
        {
            res=(res*x)%MODM; 
        }
        y=y>>1;
        x=(x*x)%MODM;  
    }  
    return res;  
}  
// Compute inverse of x under modulo (Fermats’s little theorem) 
// a^(m-1) = 1 (mod m);
// a^(-1) = a^(m-2) (mod m)

ll modinv(ll a)
{
    ll x = power(a,MODM-2);
    return x;
}
// Compute nCr % p (Lucas Theorem)
vector<ll> fact(1,1);
vector<ll> inv(1,1);
ll solve(ll n, ll k)
{
    if(k<0 || k>n)
    {
        return 0;
    }
    while(fact.size()<(n+1))
    {
        ll x = fact.back();
        x*=fact.size();
        x=x%MODM;
        fact.pb(x);
        ll y = modinv(x);
        inv.pb(y);
    }
    ll ans = fact[n];
    ans = (ans*inv[k])%MODM;
    ans = (ans*inv[n-k])%MODM;
    return ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,k;
    cin>>n>>k;
    vector<ll> left;
    vector<ll> right;
    for(int i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        left.pb(x);
        ll y;
        cin>>y;
        right.pb(y);
    }
    vector<pair<int,int> > v;
    for(int i=0;i<n;i++)
    {
        v.pb({left[i],i});
    }
    sort(v.begin(),v.end());
    ll ans=0;
    multiset<ll> s;
    for(int i=0;i<n;i++)
    {
        ll x = v[i].second;
        while((!s.empty()) && (*s.begin()<left[x]))
        {
            s.erase(s.begin());
        }
        ll sz = s.size();
        ans= (ans+solve(sz,k-1))%MODM;
        s.insert(right[x]);
    }
    cout<<ans<<endl;
}
