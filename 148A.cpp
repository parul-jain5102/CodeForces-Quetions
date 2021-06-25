// Problem 148A codeforces solution
#include <bits/stdc++.h>
using namespace std;
int main()
{
    fast
#ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
   int k,l,m,n,d;
   vector<int> v(100000, 0);
   cin>>k>>l>>m>>n>>d;
//    cout<<k<<l<<m<<n<<d;
for(int i=k;i<=d;i=i+k )
{
    v[i]=1;
 
}
for(int i=l;i<=d;i=i+l )
{
    v[i]=1;
 
}
for(int i=m;i<=d;i=i+m )
{
    v[i]=1;
}
for(int i=n;i<=d;i=i+n )
{
    v[i]=1;
 
}
int count=0;
for(int j=1;j<=100000;j++)
{   if(v[j]==1)
           count++;
}
cout<<count;
}
