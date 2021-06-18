//Problem 750A codeforces
#include <bits/stdc++.h>
using namespace std;
int main()
{
    fast
#ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
  int n,k;
    cin>>n>>k;
    int time=240-k,cnt=0;
    for(int i=1;i<=n;i++)
    {
        int t=5*i;
        if(t<=time)
        {
            time=time-t;
            cnt++;
        }
        
    }
    cout<<cnt;
    return 0;
}
