//Problem 703A codeforces
#include <bits/stdc++.h>
using namespace std;
int main()
{
    fast
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
int n,cntA=0,cntB=0;
cin>>n;
for(int i=1;i<=n;i++)
{
    int a,b;
    cin>>a>>b;
    if(a>b)
       cntA++;
    if(b>a)
       cntB++;
       
}
if(cntA>cntB)
  cout<<"Mishka";
if(cntB>cntA)
  cout<<"Chris";
if(cntA==cntB)
  cout<<"Friendship is magic!^^";
    
    return 0;
}
