#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
# define vl vector <ll>
#define nl  '\n'
# define all(v) (v).begin() , (v).end()
int main(){
     map<string,int>mp;
     mp.insert({"Sakib al hasan",75});
     mp.insert({"Tamim Iqbal",28});
     mp.insert({"Ishtiaq uddin",9});
     mp.insert({"Shamim",29});
     mp["mahin"]=90;  // O(log N)

     /*  for(auto it=mp.begin();it!=mp.end();it++){
         cout<<it->first<<" "<<it->second<<endl; // O(log N)
      } */

     //  for(auto x:mp){
     //     cout<<x.first<<" "<<x.second<<endl; // O(log N)
     //  }

     if(mp.count("Shamim")){
        cout<<"ase"<<endl;
     }
     else {
        cout<<"Nai"<<endl;
     }
}

//hashing