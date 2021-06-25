// Problem 136A codeforces solution
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
int main()
{
    fast 
    #ifndef ONLINE_JUDGE
       freopen("input.txt","r",stdin);
       freopen("output.txt","w",stdout);
    #endif
    int n;
    cin>>n;
    int mp[105];
 
    for(int i=1;i<=n;i++)
    { int a;
      cin>>a;
      mp[a]=i;
    }
    for(int i=1;i<=n;i++)
    { cout<<mp[i]<<" ";
    }
   
     return 0;
     
    
 }
