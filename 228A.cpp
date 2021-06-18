//Problem 228A codeforces
#include <bits/stdc++.h>
using namespace std;
int main()
{
int count=0;
    map<int,int> mp;
    for(int i=0;i<4;i++)
    {
        int x;
        cin>>x;
        mp[x]+=1;
        if(mp[x]>1)
        count++;
    }
    
    cout<<count;

    return 0;
}
