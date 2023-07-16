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

int main()
{
    Node *first = NULL;
    Node *last = NULL;
    int c=0;
    int v;
    while (true)
    {
        cin >> v;
        if (v == -1)
            break;

        c++;
        insert_last(first, last, v);
    }
    
    for(Node* i=first;i->np!=NULL;i=i->np){
        for (Node *j = i->np; j != NULL; j = j->np)
        {
            if(i->v < j->v){
                swap(i->v,j->v);
            }
        }
    }

    
    
    if(c&1){
        for (int i = 0; i < c / 2; i++)
        {
            first = first->np;
        }
        cout<<first->v;
    }
    else{
        for (int i = 0; i < c / 2 -1; i++)
        {
            first = first->np;
        }
        cout << first->v<<" "<<first->np->v;
    }

    
    return 0;
}