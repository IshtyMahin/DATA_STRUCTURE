#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
# define vl vector <ll>
#define nl  '\n'
# define all(v) (v).begin() , (v).end()
int main(){
     int n,m;
     cin>>n>>m;
     queue<int>q;
     stack<int>s;

     for(int i=0;i<n;i++){
        int c;
        cin>>c;
        s.push(c);
     }
     for(int i=0;i<m;i++){
        int c;
        cin>>c;
        q.push(c);
     }

     if(n!=m){
        cout<<"NO"<<endl;
     }
     else{
        while(s.size()){
            if(s.top()!= q.front()){
                cout<<"NO"<<endl;
                return 0;
            }
            else{
                q.pop();
                s.pop();
            }
        }
        cout<<"YES"<<endl;
     }

     return 0;
}