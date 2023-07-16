#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
# define vl vector <ll>
#define nl  '\n'
# define all(v) (v).begin() , (v).end()
void fun(int * &p){
      *p=20;
      p=NULL;
}
int main(){
     int val =10;
     int *ptr = &val;
     fun(ptr);
     cout<<val<<endl;
     cout<<*ptr<<endl;
}