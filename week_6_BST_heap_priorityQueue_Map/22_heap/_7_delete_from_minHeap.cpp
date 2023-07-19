#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define vl vector<ll>
#define nl '\n'
#define all(v) (v).begin(), (v).end()
void insert_heap(vector<int> &v, int x)
{
    v.push_back(x);
    int cur_ind = v.size() - 1;
    while (cur_ind != 0)
    {
        int parent_ind = (cur_ind - 1) / 2;
        if (v[parent_ind] > v[cur_ind])
        {
            swap(v[parent_ind], v[cur_ind]);
        }
        else
            break;
        cur_ind = parent_ind;
    }
}

void delete_heap(vector<int> &v)
{
    v[0] = v[v.size() - 1];
    v.pop_back();
    int cur = 0;
    while (true)
    {
        int left_idx = cur * 2 + 1;
        int right_idx = cur * 2 + 2;
        int last_idx = v.size() - 1;

        if (left_idx <= last_idx && right_idx <= last_idx)
        {

            if (v[left_idx] <= v[right_idx] && v[left_idx] < v[cur])
            {
                swap(v[cur], v[left_idx]);
                cur = left_idx;
            }
            else if (v[right_idx] <= v[left_idx] && v[right_idx] < v[cur])
            {
                swap(v[cur], v[right_idx]);
                cur = right_idx;
            }
            else
            {
                break;
            }
        }
        else if (left_idx <= last_idx && v[left_idx] < v[cur])
        {
            swap(v[cur], v[left_idx]);
            cur = left_idx;
        }
        else
        {
            break;
        }
    }
}
int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        insert_heap(v, x);
    }

    for (auto x : v)
    {
        cout << x << " ";
    }
    delete_heap(v); // o(log n)

    cout << endl;
    for (auto x : v)
    {
        cout << x << " ";
    }
}