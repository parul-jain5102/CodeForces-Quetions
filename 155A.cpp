// Problem 155A codeforces
#include<bits/stdc++.h>
using namespace std;
int main()
{
    fast
#ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    long long int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);

    }
    int maxsofar=v[0],minsofar=v[0];
    int cnt=0;
    for(auto k:v)
    {   
        if(k<minsofar)
        {
            minsofar=k;
            cnt++;
        }
        if(k>maxsofar)
        {
            maxsofar=k;
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}
