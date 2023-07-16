#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<string> l;

    string val;

    while (true)
    {
        cin >> val;
        if (val == "end")
            break;

        l.push_back(val);
    }

    auto curr = l.end();
    curr--;

    int q;
    cin >> q;
    
    while (q--)
    {
        string x;
        cin >> x;
 
        if (x == "visit")
        {
            string s;
            cin >> s;

            bool flag = false;
            for (auto it = l.begin(); it != l.end(); it++)
            {
                if (*it == s)
                {
                    cout << *it << endl;
                    curr = it;
                    flag = true;
                    break;
                }
            }
            
            if (!flag)
                cout << "Not Available" << endl;
        }
        else if (x == "next")
        {
            auto last = l.end();
            last--;
            if (curr != last)
            {
                curr++;
                cout << *curr << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
        else if (x == "prev")
        {
            if (curr != l.begin())
            {
                curr--;
                cout << *curr << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
    }
}