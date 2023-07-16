#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define vl vector<ll>
#define nl '\n'
#define all(v) (v).begin(), (v).end()
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->next = NULL;
        this->val = val;
    }
};

// O(n)
void print_linked_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

// TC => O(n)
int size(Node *head)
{
    Node *tmp = head;
    int count = 0;
    while (tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }
    return count;
}

//O(n)
void delete_at_position(Node *head, int pos)
{
    Node *tmp = head;
    for (int i = 1; i < pos; i++)
    {
        tmp = tmp->next;
    }
    Node *deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    delete deleteNode;
}

//O(1)
void delete_head(Node *&head){
    Node *deleteNode = head;
    head= head->next;
    delete deleteNode;
}

int main()
{
    /* Node a,b;
    a.val =10;
    b.val =20;
    a.next = &b; */

    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    Node *tail = d;
    //  cout<<a->val<<endl;
    //  cout<<(*a).val<<endl;
    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    print_linked_list(head);
    int pos;
    cin>>pos;
    if(pos>=size(head))
        cout<<"Invalid"<<endl;
    else if(pos==0){
        delete_head(head);
    }
    else 
        delete_at_position(head,pos);
    print_linked_list(head);
}