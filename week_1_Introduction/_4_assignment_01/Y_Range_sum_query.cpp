#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
# define vl vector <ll>
#define nl  '\n'
# define all(v) (v).begin() , (v).end()
int main(){
     ll n,q;
     cin>>n>>q;
     vl a(n);
     vl v(n+1);
     for(int i=0;i<n;i++){
        cin>>a[i];
     }
     for(int i=1;i<=n;i++){
        v[i]=v[i-1]+a[i-1];
     }

     while(q--){
        ll l,r;
        cin>>l>>r;
      
        cout<<v[r]-v[l-1]<<nl;
     }
    
}