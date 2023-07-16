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

void print_original(Node* first){
    
     while(first!=NULL){
        cout<<first->v<<" ";
        first=first->np;
     }
}

void print_reverse(Node *first)
{

    if (first == NULL)
        return;
    print_reverse(first->np);
    cout << first->v << " ";
}

int main()
{
    Node *first = NULL;
    Node *last = NULL;
    int c = 0;
    int v;
    while (true)
    {
        cin >> v;
        if (v == -1)
            break;

        c++;
        insert_last(first, last, v);
    }
    
    print_reverse(first);
    cout<<endl;
    print_original(first);

    

    return 0;
}