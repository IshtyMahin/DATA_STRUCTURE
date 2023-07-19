#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define vl vector<ll>
#define nl '\n'
#define all(v) (v).begin(), (v).end()
int main()
{
    vector<int> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {

        int x;
        cin >> x;
        v.push_back(x);
        int cur_ind = v.size() - 1;
        while (cur_ind != 0)
        {
            int parent_ind = (cur_ind - 1) / 2;
            if (v[parent_ind] > v[cur_ind])
            {
                swap(v[parent_ind], v[cur_ind]);
            }
            else break;
            cur_ind = parent_ind;
        }
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}

// N(log N) => 10^5