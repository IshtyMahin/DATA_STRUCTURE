#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
# define vl vector <ll>
#define nl  '\n'
# define all(v) (v).begin() , (v).end()
int main(){
     set <int,greater<int>>s;
     int n;
     cin>>n;
     while(n--){
         int x;
         cin>>x;
         s.insert(x); // O(logn)
     }

     if(s.count(1000))cout<<"Yes"; // O(logN)
     else cout<<"no";
     
     for(auto x:s){
        cout<<x<<endl;
     }
}

// BST , Sorted (In order )(left mid right) , not duplicate , searching

// balanced BST