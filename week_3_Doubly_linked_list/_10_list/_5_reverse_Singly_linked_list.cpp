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

void insert_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

void print_reverse(Node *n)
{

    if (n == NULL)
        return;
    print_reverse(n->next);
    cout << n->val << " ";
}

void reverse(Node * &head,Node * cur){
     if(cur->next==NULL){
        head=cur;
        return;
     }

     reverse(head,cur->next);
     cur->next->next=cur;
     cur->next=NULL;
}


int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;

        insert_tail(head, tail, val);
    }

    // for (Node *i = head; i->next != NULL; i = i->next)
    // {
    //     for (Node *j = i->next; j != NULL; j = j->next)
    //     {
    //         if (i->val < j->val)
    //         {
    //             swap(i->val, j->val);
    //         }
    //     }
    // }

    print_linked_list(head);
    reverse(head,head);
    print_linked_list(head);
}