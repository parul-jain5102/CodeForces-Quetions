// Codeforces 200B solution
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
cin>>n;
vector<float> v;
for(int i=1;i<=n;i++)
{   float x;
    cin>>x;
    float ojc;
    ojc=x/100;
    v.push_back(ojc);
 
}
float sum=0.0;
for(auto k:v)
{
    sum=sum+k;
}
float ans=(sum/n)*100;
cout<<ans;
 
 
}
