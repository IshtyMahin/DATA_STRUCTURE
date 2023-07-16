#include<bits/stdc++.h>
using namespace std;

int main(){
     long long int n;
     cin>>n;
     vector<long long int>v(n);
     for(int i=0;i<n;i++){
        cin>>v[i];
     }
     sort(v.begin(),v.end());

     for(long long int i=0;i<n-1;i++){
        if(v[i]==v[i+1]){
          cout<<"YES"<<endl;
          return 0;
        }
     }

     cout<<"NO"<<endl;

     return 0;
}