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

};
int main(){
    Node a,b;
    a.val =10;
    b.val =20;

    a.next=&b;
    b.next=NULL;

 
    cout<<a.val<<endl;
    // cout<<b.val<<endl;
    // cout<<(*a.next).val<<endl;
    cout<<a.next->val<<endl;
     
}