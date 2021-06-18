//Problem 337A codeforces
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    vector<int> v;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    int j = n - 1;
    int md = 1000;
    for (int i = 0; i <= v.size() - n; i++)
    {
        if (j < m)
        {
            int a = v[j] - v[i];
            md = min(md, a);
            j++;
        }
    }
    cout << md;
    return 0;
}
