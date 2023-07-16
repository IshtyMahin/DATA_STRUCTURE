#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
# define vl vector <ll>
#define nl  '\n'
# define all(v) (v).begin() , (v).end()
class Node{
    public:
        int val;
        Node* next;
    Node(int val){
        this->next=NULL;
        this->val=val;
    }
};

//O(n)
 void print_linked_list(Node* head){
    Node*tmp=head;
    while(tmp!=NULL){
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
 }

//TC => O(n)
 int size(Node * head){
    Node *tmp = head;
    int count =0;
    while(tmp!=NULL){
        count++;
        tmp=tmp->next;
    }
    return count;
 }

 //TC => O(n)
 void insert_at_position(Node * head,int pos,int val){
    Node* newNode=new Node(val);
    Node * tmp = head;
    for(int i=1;i<pos;i++){
        tmp=tmp->next;
    }
    newNode->next=tmp->next;
    tmp->next=newNode;
 }

 void insert_at_head(Node * &head,int val){
        Node * newNode = new Node(val);
        newNode->next=head; 
        head= newNode;
 }

 void insert_tail(Node * &head,Node * &tail,int val){
       Node* newNode = new Node(val);
       if(head==NULL){
        head= newNode;
        tail=newNode;
        return ;
       }
       tail->next=newNode;
       tail= newNode;
 }

void delete_at_position(Node *head,int pos){
    Node * tmp = head;
    for(int i=1;i<pos;i++){
        tmp=tmp->next;
    }
    Node *deleteNode= tmp->next;
    tmp->next=tmp->next->next;

}
int main(){
     /* Node a,b;
     a.val =10;
     b.val =20;
     a.next = &b; */

     Node * head = new Node(10);
     Node *a = new Node(20);
     Node *b = new Node(30);
     Node *c = new Node(40);
     Node *d = new Node(50);
     Node *tail = d;
    //  cout<<a->val<<endl;
    //  cout<<(*a).val<<endl;
     head->next=a;
     a->next=b;
     b->next=c;
     c->next=d;
     print_linked_list(head);
     cout << "Tail -> " << tail->val << endl;

     int pos,val;
     cin>>pos>>val;
    
     if(pos>size(head)){
        cout<<"Invalid Index"<<endl;
     }
     else if (pos == 0)
     {
        insert_at_head(head,val);
     }
     else if(pos==size(head)){
        insert_tail(head,tail,val);
     }
     else{
        insert_at_position(head,pos,val);
     }

     print_linked_list(head);
     cout<<"Tail -> "<<tail->val<<endl;
}