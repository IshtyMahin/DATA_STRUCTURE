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

Node * convert(int a[],int n,int l,int r){

        if(l>r)return NULL;
        int mid = (l+r)/2;
        Node * root = new Node(a[mid]);
        Node * leftNode = convert(a,n,l,mid-1); 
        Node * rightNode = convert(a,n,mid+1,r);

        root->left=leftNode;
        root->right=rightNode;

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

int main(){
     int n;
     cin>>n;
     int a[n];
     for(int i=0;i<n;i++){
        cin>>a[i];
     }

     Node * root = convert(a,n,0,n-1);

     level_order(root);
     
}