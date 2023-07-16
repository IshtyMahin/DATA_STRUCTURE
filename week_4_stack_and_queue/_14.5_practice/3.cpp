#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define vl vector<ll>
#define nl '\n'
#define all(v) (v).begin(), (v).end()

int main()
{
    stack<int> st, st2;
    int n;
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        std::cin >> x;
        st.push(x);
    }
    
    while (st.size())
    {
        st2.push(st.top());
        st.pop();
    }
    
    while (st2.size())
    {
        cout<<st2.top()<<" ";
        st2.pop();
    }
    

    return 0;
}