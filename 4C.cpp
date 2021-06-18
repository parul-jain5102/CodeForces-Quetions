// Problem 4C codeforces
#include <bits/stdc++.h>
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
    map<string,int> mp;
    for(int i=0;i<n;i++)
    {   string str;
        cin>>str;
        // mp[str]++;
        auto it = mp.find(str);
        if(it!=mp.end())
        {   
            mp[str]++;
            cout<<str<<mp[str]-1<<endl;;
        }
        else
        {
            cout<<"OK"<<endl;;
            mp[str]++;
        }
    }
    
    return 0;
}
