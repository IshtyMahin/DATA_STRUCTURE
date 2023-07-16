#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int n, m;
    cin >> n;
    vector<long long int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
     }
     cin>>m;
     vector<long long int> v1(m);
     for (long long int i = 0; i < m; i++)
     {
        cin >> v1[i];
     }
     long long int x;
     cin>>x;

     v.insert(v.begin()+x,v1.begin(), v1.end());

     for(long long int i=0;i<n+m;i++){
           cout<<v[i]<<" ";
     }


}