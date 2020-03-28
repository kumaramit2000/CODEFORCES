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
       string s;
       cin>>s;
       ll temp=0;
       string a="";
       string b="";
       for(int i=0;i<n;i++)
       {
           if(temp==0)
           {
           if(s[i]=='0')
           {
               a+='0';
               b+='0';
           }
           else if(s[i]=='1')
           {
               a+='1';
               b+='0';
               temp=1;
           }
           else
           {
               a+='1';
               b+='1';
           }
           }
           else
           {
           if(s[i]=='0')
           {
               a+='0';
               b+='0';
           }
           else if(s[i]=='1')
           {
               a+='0';
               b+='1';
           }
           else
           {
               a+='0';
               b+='2';
           }   
           }
       }
       cout<<a<<endl;
       cout<<b<<endl;
    }
	return 0;
}
