// Problem 1030A codeforces solution
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
    for(int i=0;i<n;i++)
    {   int a;
        cin>>a;
        if(a==1)
        {
            cout<<"HARD";
            return 0;
        }
    }
    cout<<"EASY";
   
     return 0;
     
    
 }
