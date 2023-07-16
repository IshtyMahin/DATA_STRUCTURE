#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
# define vl vector <ll>
#define nl  '\n'
# define all(v) (v).begin() , (v).end()

class Node{
    public:
         int val;
         Node * left;
         Node * right;
    Node(int val){
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};

void printPre(Node * a){
     if(a==NULL){
        return ;
     }
    
     cout<<a->val<<" ";  
     printPre(a->left);
     printPre(a->right);
}

void printPost(Node * a){
     if(a==NULL){
        return ;
     }
    
     printPost(a->left);
     printPost(a->right);
     cout<<a->val<<" ";  
}

void printIN(Node * a){
     if(a==NULL){
        return ;
     }
    
     printIN(a->left);
     cout<<a->val<<" ";  
     printIN(a->right);
}

int main(){
      Node * root = new Node(10);
      Node * a = new Node(20);
      Node * b = new Node(30);
      Node * c = new Node(40);
      Node * d = new Node(50);
      Node * e = new Node(60);
      Node * f = new Node(70);
      Node * g = new Node(80);
      Node * h = new Node(90);
      Node * i = new Node(100);

      root->left=a;
      root->right=b;
      a->left=c;
      a->right=h;
      c->right=e;
      b->right=d;
      d->left=f;
      d->right=g;
      h->right=i;

      printPre(root);
      cout<<endl;
      printPost(root);
      cout<<endl;
      printIN(root);
      cout<<endl;
}

//syntex tree => compiler
// pre-order => root -> left -> right
//post - order => left -> right -> root
//IN - order => left -> root -> right