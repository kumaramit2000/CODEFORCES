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
int main() 
{ 
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    ll t; 
    cin>>t; 
    while(t--) 
    {
        ll a,b;
        cin>>a>>b;
        ll res= (((b-a)%b)+b)%b;
        cout<<res<<endl;
    } 	
     return 0; 
}
