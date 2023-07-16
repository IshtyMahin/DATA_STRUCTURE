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

void reverse(Node * & first,Node * cur){
    if(cur->np ==NULL){
        first=cur;
        return;
    }

    reverse(first,cur->np);
    cur->np->np =cur;
    cur->np =NULL;
}

bool isPalindrome(Node * first){
    Node * newFirst=NULL;
    Node * newLast = NULL;
    Node * tmp = first;
    while(tmp !=NULL){
        insert_last(newFirst,newLast,tmp->v);
        tmp=tmp->np;
    }

    reverse(newFirst,newFirst);

    while (first!=NULL)
    {
        if(first->v==newFirst->v){
            first=first->np;
            newFirst=newFirst->np;
        }
        else{
            return false;
        }
    }

    return true;
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
     
    if(isPalindrome(first))cout<<"YES"<<endl;
    else cout<<"NO";

    return 0;
}