#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define vl vector<ll>
#define nl '\n'
#define all(v) (v).begin(), (v).end()


int main()
{
    stack<int> st;
    int n;
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        std::cin >> x;
        st.push(x);
    }
    queue<int>q;
    int m;
    std::cin >> m;
    for (int i = 0; i < m; i++)
    {
        int x;
        std::cin >> x;
        q.push(x);
    }

    if (n != m)
    {
        cout << "NO" << endl;
        return 0;
    }
    while (q.empty() == false)
    {
        if (st.top() == q.front())
        {
            q.pop();
            st.pop();
        }
        else
        {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;

    return 0;
}