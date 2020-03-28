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
       ll n;
       cin>>n;
       ll a[n];
       set<ll> s;
       for(int i=0;i<n;i++)
       {
           cin>>a[i];
           s.insert(a[i]);
       }
       ll sz=s.size();
       if(sz==1)
       {
           cout<<1<<endl;
           for(int i=0;i<n;i++)
           {
               cout<<1<<" ";
           }
           cout<<endl;
       }
       else if(n%2==0)
       {
           cout<<2<<endl;
           for(int i=0;i<n;i++)
           {
               if(i%2==0)
               {
                   cout<<1<<" ";
               }
               else
               {
                   cout<<2<<" ";
               }
           }
           cout<<endl;
       }
       else
       {
           int gg=0;
           for(int i=1;i<n;i++)
           {
               if(a[i]==a[i-1])
               {
                   gg=1;
                   break;
               }
           }
           if(a[n-1]==a[0]&&n>1)
           {
               gg=1;
           }
          if(gg==0)
          {
              cout<<3<<endl;
              for(int i=0;i<n-1;i++)
              {
                  if(i%2==0)
                  {
                      cout<<1<<" ";
                  }
                  else
                  {
                      cout<<2<<" ";
                  }
              }
              cout<<3<<" "<<endl;
          }
          else
          {
              cout<<2<<endl;
              ll res[n];
              for(int i=0;i<n;i++)
              {
                  res[i]=0;
              }
              res[0]=1;
              ll check=0;
              for(int i=1;i<n;i++)
              {
                  if(a[i]==a[i-1]&&check==0)
                  {
                      res[i]=res[i-1];
                      check=1;
                  }
                  else
                  {
                      if(res[i-1]==1)
                      {
                          res[i]=2;
                      }
                      else
                      {
                          res[i]=1;
                      }
                  }
              }
              for(int i=0;i<n;i++)
              {
                  cout<<res[i]<<" ";
              }
              cout<<endl;
          }
       }
    }
	return 0;
}
