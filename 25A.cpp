//Problem 25A codeforces
#include <bits/stdc++.h>
using namespace std;
int main()
{
    fast
#ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
   int n,cntEven=0,cntOdd=0;
   cin>>n;
   vector<int> v;
   for(int i=1;i<=n;i++)
   {
       int x;
       cin>>x;
       v.push_back(x);

       if(x%2==0) //even
       {
           cntEven++;
       }
       if(x%2!=0) //odd
       {
           cntOdd++;
       }
   }
   if(cntEven==n-1)
   { 
       for(int j=0;j<n;j++)
       {
           if(v[j]%2!=0)
               cout<<j+1;
       }
   }
   if(cntOdd==n-1)
   { 
       for(int j=0;j<n;j++)
       {
           if(v[j]%2==0)
               cout<<j+1;
       }
   }



  
    return 0;
}
