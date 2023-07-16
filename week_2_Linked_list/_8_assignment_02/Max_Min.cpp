//* Ishtiaq Uddin 

#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
# define vl vector <ll>
#define nl  '\n'
# define all(v) (v).begin() , (v).end()

class Node{
    public:
        int v;
        Node *np;
    Node(int v){
          this->np=NULL;
          this->v=v;
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

int main(){
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

    int mx= INT_MIN;
    int mn = INT_MAX;
    for (Node *i = first; i != NULL; i = i->np)
    {
          if(i->v>mx)mx=i->v;
          if(i->v<mn)mn=i->v;
    }

    cout<<mx<<" "<<mn<<endl;
}