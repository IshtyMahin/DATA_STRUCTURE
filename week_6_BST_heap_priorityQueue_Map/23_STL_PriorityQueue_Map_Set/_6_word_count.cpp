#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
# define vl vector <ll>
#define nl  '\n'
# define all(v) (v).begin() , (v).end()
int main(){
     string sentence;
     getline(cin,sentence);
     string word;
     stringstream ss(sentence);

     map<string,int>mp;

     while(ss>>word){
        mp[word]++;
     }

     for( auto x:mp){
        cout<<x.first<<" "<<x.second<<endl;
     }
}