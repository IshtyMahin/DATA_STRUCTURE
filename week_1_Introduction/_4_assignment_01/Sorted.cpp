#include<bits/stdc++.h>
using namespace std;

void checkSort(){
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    for (int i = 0; i < n - 1; i++)
    {
        if (v[i] <= v[i + 1])
        {
            continue;
        }
        else
        {
            cout << "NO" << endl;
            return;
        }
    }

    cout << "YES" << endl;
}
int main(){
     int t;
     cin>>t;
     while(t--){
         checkSort();
     }
     return 0;
}