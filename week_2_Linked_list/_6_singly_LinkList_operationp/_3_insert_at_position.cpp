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
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_tail(Node *&head, int v)
{
    Node *newNode = new Node(v);

    if (head == NULL)
    {
        head = newNode;
        cout << endl
             << "Insert at head" << endl
             << endl;
        return;
    }

    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }

    tmp->next = newNode;
    cout<<endl<<"Insert at tail"<<endl<<endl;
}

void print_linked_list(Node *head)
{
    
    cout<<endl;
    cout << "Yor Linked List: ";
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl<<endl;
}

void insert_at_position(Node * head,int pos,int v){
    Node* newNode = new Node(v);
    Node *tmp = head;
    for(int i=1;i<=pos-1;i++){
        tmp= tmp->next;
    }
    newNode->next= tmp->next;
    tmp->next = newNode;

    cout<<endl<<endl<<"Inserted at position "<<pos<<endl<<endl;
}
void insert_at_head(Node *&head,int v){
     Node *newNode = new Node(v);
     newNode->next = head;
     head=newNode;
     cout<<endl<<"Insert at head"<<endl<<endl;
}

void delete_from_position(Node *head,int pos){
     Node *tmp = head;
     for (int i = 1; i <= pos - 1; i++)
     {
        tmp = tmp->next;
     }
     Node *deleteNode = tmp->next;
     tmp->next = tmp->next->next;
     delete deleteNode;
     cout<<endl<<"Deleted position "<<pos<<endl<<endl;
}

void delete_from_head(Node *&head){
     Node *deletNode = head;
     head = head->next;
     delete deletNode;
     cout<<endl<<"Deleted head "<<endl<<endl;
}

int main()
{
    Node *head = NULL;
    while (true)
    {
        cout << "Option 0 : Terminate" << endl;
        cout << "Option 1 : Print Linked List" << endl;
        cout << "Option 2 : Insert at Tail" << endl;
        cout << "Option 3 : Insert at any position" << endl;
        cout << "Option 4 : Insert at head" << endl;
        cout << "Option 5 : delete from any position" << endl;
        cout << "Option 6 : delete from head" << endl;
        cout<<endl;

        int op;
        cin >> op;

        if(op==0){
            break;
        }
        else if (op == 1)
        {
            print_linked_list(head);
        }
        else if (op == 2)
        {
            cout << "Please enter value: ";

            int v;
            cin >> v;
            insert_at_tail(head, v);
        }
        else if (op == 3)
        {
          int pos,v;
          cout<<"Enter position: ";
          cin>>pos;
          cout<<"Enter value: ";
          cin>>v;
          if(pos==0){
            insert_at_head(head,v);
          }
          else 
          insert_at_position(head,pos,v);
        }
        else if(op==4){
            int v;
            cout<<"Enter value: ";
            cin>>v;
            insert_at_head(head,v);
        }
        else if(op==5){
            int pos;
            cout << "Enter position: ";
            cin >> pos;
            if(pos==0){
                delete_from_head(head);
            }
            delete_from_position(head,pos);
        }
        else if(op==6){
            delete_from_head(head);
        }
    }
}