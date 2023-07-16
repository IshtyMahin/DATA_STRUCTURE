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
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void print_normal(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << nl;
}

void print_reverse(Node *tail)
{
    Node *tmp = tail;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
    cout << nl;
}
void insert_at_position(Node *&head,Node * &tail,int pos,int val){

    Node * newNode = new Node(val);
    Node* tmp = head;


    for(int i=1;i<pos;i++){
        tmp=tmp->next;
    }
    
    
    newNode->prev= tmp;
    newNode->next= tmp->next;
    tmp->next->prev=newNode;
    tmp->next=newNode;
}

void insert_at_tail(Node *&head,Node *&tail,int val){

    Node *newNode = new Node(val);

    if (tail == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    //* insert at tail
    
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
      
}

void insert_at_head(Node *&head,Node *&tail,int val){
    Node *newNode = new Node(val);
    if(head==NULL){
        head=newNode;
        tail=newNode;
        return;
    }

    //* insert at head
    
    head->prev = newNode;
    newNode->next = head;
    head = newNode;

}

int size(Node* head){
    Node* tmp = head;
    int cnt=0;
    while(tmp!=NULL){
        cnt++;
        tmp=tmp->next;
    }

    return cnt;
}


int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);

    Node *tail = c;

    //* connection
    head->next = a;
    a->prev = head;
    a->next = b;
    b->prev = a;
    b->next = c;
    c->prev =b;

    int pos,val;
    cin>>pos>>val;

    if (pos == 0)
    {
        insert_at_head(head, tail, val);
    }
    else if(pos==size(head)){
        insert_at_tail(head,tail,val);
    }
    else if (pos > size(head))
    {
        cout << "Invalid" << endl;
    }
    else{
     insert_at_position(head,tail,pos,val);
    }

    print_normal(head);
    print_reverse(tail);

    
}