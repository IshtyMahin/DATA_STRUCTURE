// https: // leetcode.com/problems/backspace-string-compare/description/


#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
# define vl vector <ll>
#define nl  '\n'
# define all(v) (v).begin() , (v).end()
int main(){
     string s;
     cin>>s;

     string t;
     cin>>t;

     stack<char>st;
     for(int i=0;i<s.size();i++){
            if(s[i]=='#'){
                if (!st.empty())
                    st.pop();
            }
            else{
                st.push(s[i]);
            }
     }
     stack<char>st2;
     for(int i=0;i<t.size();i++){
            if(t[i]=='#' ){
                if (!st2.empty())
                    st2.pop();
            }
            else{
                st2.push(t[i]);
            }
     }

    return st==st2;
    
}