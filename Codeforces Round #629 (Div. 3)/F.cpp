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
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,k;
    cin>>n>>k;
    ll a[n],b[n+5];
    for(int i=0;i<=n;i++)
    {
        b[i]=0;
    }
    ll ans=1e18;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(int i=0;i<n;i++)
    {
        b[i+1]=a[i]+b[i];
    }
    for(int i=0,j=0;i<n;i=j)
    {
        for(;j<n&&a[j]==a[i];++j);
            ll c=j-i; // no of x;
            ll x=a[i];// value of x;
            ll cl=(ll)i*(x-1)-b[i];//cost used to make prefix element to x;
            ll cr=b[n]-b[j]-(ll)(n-j)*(x+1);//cost used to make postfix element to x;
            // evaluation of result;
            if(c>=k)
            {
                ans=0;
            }
            if(c+i>=k)
            {
                ans= min(ans,cl+k-c);// left;
            }
            if(n-j+c>=k)
            {
                ans=min(ans,cr+k-c);// right;
            }
            ans=min(ans,cl+cr+k-c); // both;
    }
    ans=max(0ll,ans);
    cout<<ans<<endl;
	return 0;
}
