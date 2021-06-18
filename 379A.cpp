// problem 379A codeforces
#include <bits/stdc++.h>
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    
    int a, b, x, y;
    cin >> a >> b;
    int ans = a;

    while(a >= b)
    {
        x = a / b;
        ans += x;
        y = a % b;
        a = x + y;
    }

    cout << ans << endl;
    



    return 0;
}
