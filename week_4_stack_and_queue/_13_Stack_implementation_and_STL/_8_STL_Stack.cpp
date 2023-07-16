#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
# define vl vector <ll>
#define nl  '\n'
# define all(v) (v).begin() , (v).end()
int main(){
     stack<int> st;
     int n;
     cin >> n;
     for (int i = 0; i < n; i++)
     {
         int x;
         cin >> x;
         st.push(x);
     }

     while (st.empty() == false)
     {
         cout << st.top() << nl;
         st.pop();
     }
}