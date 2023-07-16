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

void level_order(Node *root)
{

    if (root == NULL)
    {
        cout << "Tree nai" << endl;
        return;
    }
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        Node *f = q.front();
        q.pop();

        cout << f->val << " ";

        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }
}

// best case O(log n) //wrost case O(n)

// TC = O(hight of tree)

bool search(Node *root, int x)
{
    if (root == NULL)
        return false;
    if (root->val == x)
        return true;
    if (x < root->val)
    {
        return search(root->left, x);
    }
    else
    {
        return search(root->right, x);
    }
}
void insert(Node *&root,int x){

    if(root==NULL){
        root = new Node(x);
        return;
    }
    if(x<root->val){
        if(root->left==NULL){
            root->left=new Node(x);
        }
        else{
            insert(root->left,x);
        }
    }
    else{
        if(root->right==NULL){
            root->right=new Node(x);
        }
        else{
            insert(root->right,x);
        }
    }
}
int main()
{
    Node *root = input_tree();
    int x;
    cin>>x;
    insert(root,x);
    insert(root,32);
    insert(root,27); //O(H)  , n ta node = O(H * N)
    insert(root,22);
    level_order(root);
 
}