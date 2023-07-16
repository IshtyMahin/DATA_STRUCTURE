#include<bits/stdc++.h>
using namespace std;

int main(){
      long long int n;
      cin>>n;
      vector<long long int>v(n);
      vector<long long int>v1(n+1);

      for(int i=0;i<n;i++){
         cin>>v[i];
         v1[i+1]=v[i]+v1[i];
      }

      for(int i=n;i>0;i--){
        cout<<v1[i]<<" ";
      }


}