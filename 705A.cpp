// Problem 705A codeforces solution
#include <bits/stdc++.h>
using namespace std;
int main()
{
    fast
#ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (i == n) //last
        {
            if (i % 2 != 0) //odd
            {
                cout << "I hate it"<< " ";
                break;
            }
            else //even
            {
                cout << "I love it"<< " ";
                break;
            }
        }
        if (i % 2 != 0) //odd
        {
            cout << "I hate that"<< " ";
        }
        else //even
        {
            cout << "I love that"<< " ";
        }
    }
 
    return 0;
}
