//Problem 268A codeforces
#include <bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
    vector<pair<int,int>> v;
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        v.push_back({x,y});
    }
    int count=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(j!=i)
            {
                if(v[i].second==v[j].first)
                count++;
            }
        }
    }
    cout<<count;
    return 0;
}
