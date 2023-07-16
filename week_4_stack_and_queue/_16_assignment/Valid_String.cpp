#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
# define pb push_back 
# define vl vector <ll>
#define nl  '\n'
#define yes cout<<"YES"<<nl
#define no  cout<<"NO"<<nl
#define    error  cout<<-1<<nl
# define all(v) (v).begin() , (v).end()
# define FAST ios_base :: sync_with_stdio (false) ; cin.tie(0) ; cout.tie(0)
 
void solve (int t) {
  string s;
  cin>>s;
  stack<int>st,st2;
  for(int i=0;i<s.size();i++){
       if(s[i]=='A'){
          if(st2.empty()){
            st.push(s[i]);
          }
          else{
            st2.pop();
          }
       }
       else{
          if (st.empty())
          {
            st2.push(s[i]);
          }
          else
          {
            st.pop();
          }
       }
  }

  if(st.size()!=0 || st2.size()!=0){
    cout<<"NO"<<endl;
  }
  else{
    cout<<"YES"<<endl;
  }
}

int main() {
   FAST ;
   int t = 1 ;
   cin >> t ;
   while (t--) {
   solve (t) ;
  }
  return 0 ;
}