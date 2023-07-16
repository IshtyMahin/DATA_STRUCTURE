#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define vl vector<ll>
#define nl '\n'
#define yes cout << "YES" << nl
#define no cout << "NO" << nl
#define error cout << -1 << nl
#define all(v) (v).begin(), (v).end()
#define FAST                           \
    ios_base ::sync_with_stdio(false); \
    cin.tie(0);                        \
    cout.tie(0)

void solve(int t)
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    string s2;
    stack<char> st;
    for (int i = 0; i < n - 1; i = i + 2)
    {
        if ((s[i] == 'R' && s[i + 1] == 'B') || (s[i] == 'B' && s[i + 1] == 'R'))
        {
            if (st.empty())
            {
                st.push('P');
            }
            else
            {
                if (st.top() == 'P')
                {
                    st.pop();
                }
                else
                {
                    st.push('P');
                }
            }
        }
        else if ((s[i] == 'R' && s[i + 1] == 'G') || (s[i] == 'G' && s[i + 1] == 'R'))
        {
            if (st.empty())
            {
                st.push('Y');
            }
            else
            {
                if (st.top() == 'Y')
                {
                    st.pop();
                }
                else
                {
                    st.push('Y');
                }
            }
        }
        else if ((s[i] == 'B' && s[i + 1] == 'G') || (s[i] == 'G' && s[i + 1] == 'B'))
        {
            if (st.empty())
            {
                st.push('C');
            }
            else
            {
                if (st.top() == 'C')
                {
                    st.pop();
                }
                else
                {
                    st.push('C');
                }
            }
        }
    }

    if (n & 1)
    {
        st.push(s[n - 1]);
    }

    stack<char> rst;
    while(st.size()){
        rst.push(st.top());
        st.pop();
    }
    
    while(rst.size()){
        cout<<rst.top();
        rst.pop();
    }
    cout<<endl;
}

int main()
{
    FAST;
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve(t);
    }
    return 0;
}