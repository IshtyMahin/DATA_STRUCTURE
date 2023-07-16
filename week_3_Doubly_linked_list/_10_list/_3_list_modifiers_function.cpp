#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
# define vl vector <ll>
#define nl  '\n'
# define all(v) (v).begin() , (v).end()
int main(){
     list<int>myList={10,20,30,40,50,30,30,20};
     list<int>newList ={100,150,200};
     vector<int>v ={60,70,80};
    //  list<int>newList;
    //  newList = myList;
    // newList.assign(myList.begin(),myList.end());
    
     /* myList.push_back(60);
     myList.push_front(0); */
 

    /*  myList.pop_back();
    myList.pop_front(); */
     
    // myList.insert(next(myList.begin(),2),100);


    // myList.insert(next(myList.begin(),2),{100,200,300});

    //myList.insert(next(myList.begin(),3),newList.begin(),newList.end());

    // myList.insert(next(myList.begin(),3),v.begin(),v.end());

    // myList.erase(next(myList.begin(),2));

    // myList.erase(next(myList.begin(),3),next(myList.begin(),5));

    // replace(myList.begin(),myList.end(),30,100);

    //  for(auto x:myList){
    //     cout<<x<<" ";
    //  }

    auto it = find(myList.begin(),myList.end(),20);
    if(it==myList.end()){
        cout<<"Not found";
    }
    else 
      cout<<*it<<endl;
}

/*
    ! myList= or myList.assign(list2.begin(),list2.end())
        * => Assign another list.
        * => O(N)
    ! myList.push_back()
        * => Add an element to the tail.
        * => O(1)
    ! myList.push_front()
        * => Add an element to the head.
        * => O(1)
    ! myList.pop_back()
        * => Delete the tail.
        * => O(1)
    ! myList.pop_front()
        * => Delete the head.
        * => O(1)
    ! myList.insert()
        * => Insert elements at a specific position.
        * => O(N+K); where K is the number of elements to be inserted.
    ! myList.erase()
        * => Delete elements from a specific position.
        * => O(N+K); where K is the number of elements to be deleted.


    ! replace(myList.begin(),myList.end(),value,replace_value)
        * => Replace all the value with replace_value. Not under a list STL.
        * => O(N)
    ! find(myList.begin(),myList.end(),V)
        * => Find the value V. Not under a list STL.
        * => O(N)



 */