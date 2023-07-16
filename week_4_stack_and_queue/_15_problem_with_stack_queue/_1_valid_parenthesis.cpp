#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
# define vl vector <ll>
#define nl  '\n'
# define all(v) (v).begin() , (v).end()
int main(){
    string s;
    cin>>s;
    
    stack<char> st;
    for(int i=0;i<s.size();i++){
           if(s[i]=='(' || s[i]=='{' || s[i]=='['){
            st.push(s[i]);
           }
           else if(s[i]==')' && !st.empty() && st.top()=='('){
            st.pop();
           }
           else if (s[i] == '}' && !st.empty() && st.top() == '{')
           {
            st.pop();
           }
           else if (s[i] == ']' && !st.empty() && st.top() == '[')
           {
            st.pop();
           }
           else{
            return false;
           }
    }
    if(st.empty())
    return true;
    else return false;

  
    // queue<char>q;

}