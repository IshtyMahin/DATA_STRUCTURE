#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
# define vl vector <ll>
#define nl  '\n'
# define all(v) (v).begin() , (v).end()
int main(){
     list<int>myList={20,40,30,10,50,10,10};
    //  myList.remove(10);
    // myList.sort();
    // myList.sort(greater<int>());
    // myList.unique(); //* sort kora takte hobe
    // myList.reverse();
    //  for(auto x:myList){
    //     cout<<x<<" ";
    //  }

     cout<<*next(myList.begin(),2)<<nl;
}

/*
    ! myList.remove(V)
        * => Remove the value V from the list.
        * => O(N)
    ! myList.sort()
        * => Sort the list in ascending order.
        * => O(NlogN)
    ! myList.sort(greater<type>())
        * => Sort the list in descending order
        * => O(NlogN)
    ! myList.unique()
        * => Deletes the duplicate values from the list. You must sort the list first.
        * => O(N), with sort O(NlogN)
    ! myList.reverse()
        * => Reverse the list.
        * => O(N)





Element access ==> 


    ! myList.back()
        * => Access the tail element.
        * => O(1)
    ! myList.front()
        * => Access the head element.
        * => O(1)
    ! next(myList.begin(),i)
        * => Access the ith element
        * => O(N)

*/
