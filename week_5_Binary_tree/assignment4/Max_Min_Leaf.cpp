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

void MaxMin(Node *root)
{

    queue<Node *> q;
    if (root)
        q.push(root);

    int mx = INT_MIN, mn = INT_MAX;
    while (!q.empty())
    {
        Node *pr = q.front();
        q.pop();
        if (pr->right == NULL && pr->left == NULL)
        {
            mx = max(mx, pr->val);
            mn = min(mn, pr->val);
        }

        if (pr->right)
            q.push(pr->right);
        if (pr->left)
            q.push(pr->left);
    }

    cout << mx << " " << mn;
}

int main()
{
    Node *tree = input_tree();
    MaxMin(tree);
}