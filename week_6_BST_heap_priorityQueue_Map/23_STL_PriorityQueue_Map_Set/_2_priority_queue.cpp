#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
# define vl vector <ll>
#define nl  '\n'
# define all(v) (v).begin() , (v).end()
int main(){

    // priority_queue<int> pq;
    priority_queue<int, vector<int>, greater<int>> pq;

    while (true)
    {
        int c;
        cin >> c;
        if (c == 0)
        {
            int x;
            cin>>x;
            pq.push(x); // O(logN)
         }
         else if(c==1){
              pq.pop(); // O(log N)
         }
         else if(c==2){
            cout<<pq.top()<<endl; // O(1)
         }
         else {
            break;
         }
     }
     
}