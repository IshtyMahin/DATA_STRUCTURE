#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
# define vl vector <ll>
#define nl  '\n'
# define all(v) (v).begin() , (v).end()

class myStack{

    private:
          vector<int>v;
    public:
          void push(int val){
              v.push_back(val);
          }
          void pop(){
            v.pop_back();
          }
          int top(){
            return v.back();
          }
          int size(){
            return v.size();
          }
          bool empty(){
            if(v.size()==0)return true;
            else return false;
          }
};

int main(){
    myStack st;
    int n;
    std::cin>>n;
    for(int i=0;i<n;i++){
        int x;
        std::cin >> x;
        st.push(x);
    }

    while (st.empty()==false)
    {
       std::cout<<st.top()<<nl;
       st.pop();
    }
    
  
}