// Problem 405A codeforces solution
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
    vector<int> a;
    
    for (int i = 0; i<n; i++)
    {
        int temp;
        cin>>temp;
        a.push_back(temp);
    }
    sort(a.begin(),a.end());
    for(auto x:a)
    {
        cout<<x<<" ";
    }
    return 0;
}
