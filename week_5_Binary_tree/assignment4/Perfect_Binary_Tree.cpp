#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
# define vl vector <ll>
#define nl  '\n'
# define all(v) (v).begin() , (v).end()

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

int maxHeight(Node *root)
{
    if (root == NULL)
        return 0;

    int l = maxHeight(root->left);
    int r = maxHeight(root->right);

    return max(l, r) + 1;
}


int nodeCount(Node *root){
    int c=0;
    queue<Node *> q;

    if (root)
        q.push(root);

    while (!q.empty())
    {

        Node *p = q.front();
        c++;
        q.pop();

        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }

    return c;
}

int main(){
    Node * tree =input_tree();
    int h = maxHeight(tree);
    int c= nodeCount(tree);

    if(pow(2,h)-1 == c)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;


     
}