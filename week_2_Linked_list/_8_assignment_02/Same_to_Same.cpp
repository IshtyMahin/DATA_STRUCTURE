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
    int c=0,c2=0;
    int v;
    while (true)
    {
        cin >> v;
        if (v == -1)
            break;

        c++;
        insert_last(first, last, v);
    }

    Node *first2 = NULL;
    Node *last2 = NULL;
    
    while (true)
    {
        cin >> v;

        if (v == -1)
            break;

        c2++;
        insert_last(first2, last2, v);
    }

    if(c!=c2){
        cout<<"NO"<<endl;
    }
    else{
        for(int i=0;i<c;i++){
            if(first->v != first2->v){
                 cout<<"NO"<<endl;
                 return 0;
            }
            first=first->np;
            first2=first2->np;
        }

        cout<<"YES"<<endl;
    }

    
    
    return 0;
    
}