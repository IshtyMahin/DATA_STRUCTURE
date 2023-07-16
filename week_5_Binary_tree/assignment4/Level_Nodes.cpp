#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define vl vector<ll>
#define nl '\n'
#define all(v) (v).begin(), (v).end()

class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *input_tree()
{
    int val;
    cin >> val;
    Node *root;
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);

    queue<Node *> q;

    if (root)
        q.push(root);

    while (!q.empty())
    {

        Node *p = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;

        if (l == -1)
            p->left = NULL;
        else
            p->left = new Node(l);

        if (r == -1)
            p->right = NULL;
        else
            p->right = new Node(r);

        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return root;
}



vector<int> level(Node *root, int x)
{

    queue<pair<Node *, int>> q;

    if (root)
        q.push({root, 0});

    vector<int> v;

    while (!q.empty())
    {

        pair<Node *, int> pr = q.front();
        Node *node = pr.first;
        int l = pr.second;
        q.pop();

        if (l == x)
        {
            v.push_back(node->val);
        }

        if (node->left)
            q.push({node->left, l + 1});
        if (node->right)
            q.push({node->right, l + 1});
    }

    return v;
}

int main()
{
    Node *tree = input_tree();
    int x;
    cin >> x;
    vector<int> v = level(tree, x);
    if (v.size())
    {
        for (auto a : v)
        {
            cout << a << " ";
        }
    }
    else
        cout << "Invalid" << endl;
}