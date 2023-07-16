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
int main()
{
    Node* head = new Node(10);
    Node* a = new Node(20);

    head->next = a;

    cout<<head->val<<endl;
    cout<<a->val<<endl;
    cout<<head->next->val<<endl;
    // cout<<(*(*head).next).val<<endl;
}