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
    Node *next;
    Node *prev;
    Node(int v)
    {
        this->v = v;
        this->next = NULL;
        this->prev = NULL;
    }
};

void print_normal(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->v << " ";
        tmp = tmp->next;
    }
    cout << nl;
}

void print_reverse(Node *tail)
{
    Node *tmp = tail;
    while (tmp != NULL)
    {
        cout << tmp->v << " ";
        tmp = tmp->prev;
    }
    cout << nl;
}
void insert_at_position(Node *&head, Node *&tail, int x, int v)
{
    Node *newNode = new Node(v);
    Node *tmp = head;
    for (int i = 1; i < x; i++)
    {
        tmp = tmp->next;
    }
    newNode->prev = tmp;
    newNode->next = tmp->next;
    tmp->next->prev = newNode;
    tmp->next = newNode;
}

void insert_at_tail(Node *&head, Node *&tail, int v)
{

    Node *newNode = new Node(v);
    if (tail == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

void insert_at_head(Node *&head, Node *&tail, int v)
{
    Node *newNode = new Node(v);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    head->prev = newNode;
    newNode->next = head;
    head = newNode;
}

int size(Node *head)
{
    Node *tmp = head;
    int cnt = 0;
    while (tmp != NULL)
    {
        cnt++;
        tmp = tmp->next;
    }

    return cnt;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    
    int q;
    cin>>q;
    while(q--){
        int x, v;
        cin >> x >> v;
        
        int flag=1;
        if (x == 0)
        {
            insert_at_head(head, tail, v);
        }
        else if (x == size(head))
        {
            insert_at_tail(head, tail, v);
        }
        else if (x > size(head))
        {
            cout << "Invalid" << endl;
            flag=0;
        }
        else
        {
            insert_at_position(head, tail, x, v);
        }
        
        if(flag){
            cout << "L -> ";
            print_normal(head);
            cout << "R -> ";
            print_reverse(tail);
        }
    }
    
}