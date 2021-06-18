//Problem 339B codeforces
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,x,i,cnt=0,temp=1;
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        cin>>x;
        cnt+=(x-temp+n)%n;
        temp=x;

    }
    cout<<cnt;
    return 0;
}
