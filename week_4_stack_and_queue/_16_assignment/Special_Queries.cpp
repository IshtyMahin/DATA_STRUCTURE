#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
# define pb push_back 
# define vl vector <int>
#define nl  '\n'
#define yes cout<<"YES"<<nl
#define no  cout<<"NO"<<nl
#define    error  cout<<-1<<nl
# define all(v) (v).begin() , (v).end()
# define FAST ios_base :: sync_with_stdio (false) ; cin.tie(0) ; cout.tie(0)
 
void solve () {
    int q;
    cin>>q;
    queue<string>s;
    while(q--){
        int n;
        
        cin>>n;
        if(n==0){
            string p;
            cin>>p;
            s.push(p);
        }
        else{
            if(s.empty()){
                cout<<"Invalid"<<endl;
            }
            else{
                cout<<s.front()<<endl;
                s.pop();
            }
        }
    }
}

int main() {
   FAST ;
   solve () ;
  return 0 ;
}