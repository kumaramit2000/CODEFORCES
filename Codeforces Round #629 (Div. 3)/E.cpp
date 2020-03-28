/*love_for_code*/
/*code_for_love*/
//Code_written_by: @AMIT KUMAR;
#define ll long long int
#define ull unsigned long long int
#define MODM 1000000007
#define MODS 10000007
#define pb push_back
#define INF 2000000000000000000LL
#include <bits/stdc++.h>
using namespace std;
ll parent[200001];
ll order[200001];
ll posi[200001];
ll output[200001];
ll rude=0;
vector<int> v[200001];
void dfs(int no, int p) 
{
    order[rude]=no; 
    posi[no]=rude; 
    rude++;
    parent[no]=max(p,0);
    int sz=v[no].size();
    for(int i=0;i<sz;i++) 
    {
        int next=v[no][i];
        if(next!=p)
        {
           dfs(next,no);
        }
    }
    output[no]=rude;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
       ll n,m;
       cin>>n>>m;
       // make adjacency list; 
       for(int i=0;i<n-1;i++)
       {
           int x,y;
           cin>>x>>y;
           x--;
           y--;
           v[x].pb(y);
           v[y].pb(x);
       }
       dfs(0,0);
       for(int i=0;i<m;i++)
       {
           ll k;
           cin>>k;
           vector<ll> query(k);
           for(int j=0;j<k;j++)
           {
               cin>>query[j];
               query[j]--;
               query[j]=parent[query[j]];
           }
           int pres=query[0];
           for(int hu=1;hu<k;hu++)
           {
               int next = query[hu];
               if(next == pres)
               {
                   continue;
               }
               if(posi[next]<posi[pres]&&posi[pres]<output[next])
               {
                   continue;
               }
               if(posi[pres]<posi[next]&&posi[next]<output[pres]) 
               {
                   pres=next;
                   continue;
               }
               cout<<"NO"<<endl; 
               goto label;
           }
           cout<<"YES"<<endl;
           label: ;
       }
	return 0;
}
