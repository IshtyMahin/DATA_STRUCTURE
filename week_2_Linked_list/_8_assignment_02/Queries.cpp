//* Ishtiaq Uddin

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define vl vector<ll>
#define nl '\n'
#define all(v) (v).begin(), (v).end()

class Node
{
public:
    int v;
    Node *np;
    Node(int v)
    {
        this->np = NULL;
        this->v = v;
    }
};

void insert_last(Node *&first, Node *&last, int v)
{
    Node *newNode = new Node(v);
    if (first == NULL)
    {
        first = newNode;
        last = newNode;
        return;
    }
    last->np = newNode;
    last = newNode;
}

void insert_first(Node *&first,Node *&last, int v)
{
    Node *newNode = new Node(v);
    newNode->np = first;
    first = newNode;
    if(last==NULL){
        last = newNode;
    }
}

int main()
{
    Node *first = NULL;
    Node *last = NULL;
    int q;
    cin>>q;
    int pos,v;
    while(q--){
        cin>>pos>>v;

        if(pos==1){
            insert_last(first,last,v);
        }
        else if(pos==0){
            insert_first(first,last,v);
        }
    cout<<first->v<<" "<<last->v<<endl;
    }


    return 0;
}