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
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
       ll n,m;
       cin>>n>>m;
       m--;
       ll pos1=0,pos2=0;
       for(int i=n-2;i>=0;i--)
       {
           if(m<n-1-i)
           {
               pos1=i;
               pos2=n-1-m;
               break;
           }
           m-=n-1-i;
       }
       for(int i=0;i<n;i++)
       {
           if(i==pos1||i==pos2)
           {
              cout<<"b"; 
           }
           else
           {
               cout<<"a";
           }
       }
       cout<<endl;
    }
	return 0;
}
