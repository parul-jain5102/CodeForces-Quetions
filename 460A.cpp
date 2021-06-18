//Pronlem 460A codeforces
#include <bits/stdc++.h>
using namespace std;


int32_t main()
{
    int n, m;
    cin >> n >> m;
    int cnt = n;
    while (n >= m)
    {
        cnt += (n / m);
        n = ((n / m) + (n % m));
    }
    cout << cnt << endl;

    return 0;
}
