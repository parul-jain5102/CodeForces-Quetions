// Problem 451A.cpp
#include <bits/stdc++.h>
using namespace std;
int main()
{
    fast
#ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
int n,m;
    cin>>n>>m;
    int i = 0;
    int ip;
    while(ip!=0 || n==0 || m==0)
    {
        ip = n*m-n-m+1;
        n--;
        m--;
        i++;
        if(ip<=0)
        break;
    }
     if(i%2==0)
     {
        cout<<"Malvika";
     }
     else
     cout<<"Akshat";
    return 0;
}
