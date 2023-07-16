#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
# define vl vector <ll>
#define nl  '\n'
# define all(v) (v).begin() , (v).end()
int main(){
    queue<int> qu;
    int n;
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        std::cin >> x;
        qu.push(x);
    }

    while (qu.empty() == false)
    {
        std::cout << qu.front() << nl;
        qu.pop();
    }
}