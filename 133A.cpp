// problem 133A codeforces solution
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
    string str;
    cin>>str;
    int len=0;
    len=str.length();
    for(int i=0;i<len;i++)
    {
        if(str[i]=='H'||str[i]=='Q'||str[i]=='9')
        {
           cout<<"YES";
           return 0;
        }
       
    }
 
     cout<<"NO";
     return 0;
     
    
 }
