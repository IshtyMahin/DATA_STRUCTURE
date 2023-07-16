#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
# define vl vector <ll>
#define nl  '\n'
# define all(v) (v).begin() , (v).end()
int main(){
     queue<int>q;
     int n;
     cin>>n;
     for(int i=0;i<n;i++){
        int x;
        cin>>x;
        q.push(x);
     }


     queue<int>q2;

     stack<int>st;

     while (q.size())
     {
        st.push(q.front());
        q.pop();
     }


     while (st.size())
     {
        q2.push(st.top());
        st.pop();
     }

     while (q2.size())
     {
        cout<<q2.front()<<" ";
        q2.pop();
     }
     
     
}