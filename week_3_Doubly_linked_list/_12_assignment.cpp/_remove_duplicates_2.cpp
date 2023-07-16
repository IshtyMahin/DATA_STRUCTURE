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

void remove_dupli(Node * first){

    Node  * tmp = first;

    while(tmp->np!=NULL){
        if(tmp->v== tmp->np->v){
             tmp->np = tmp->np->np; 
        }

        if(tmp->np==NULL)break;
        else if(tmp->v!= tmp->np->v){
            tmp=tmp->np;
        }

    }
}

void print(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->v << " ";
        tmp = tmp->np;
    }
    cout << endl;
}

int main()
{
    Node *first = NULL;
    Node *last = NULL;

    int v;
    while (true)
    {
        cin >> v;
        if (v == -1)
            break;

        insert_last(first, last, v);
    }

    for (Node *i = first; i->np != NULL; i = i->np)
    {
        for (Node *j = i->np; j != NULL; j = j->np)
        {
            if (i->v > j->v)
            {
                swap(i->v, j->v);
            }
        }
    }

    remove_dupli(first);
    
    print(first);
    return 0;
}