// Problem 734 A codeforces
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
    string str;
    cin>>str;
    int cntA=0,cntD=0;
    for(int i=0;i<n;i++)
    {
       if(str[i]=='A')
          cntA++;
       else
          cntD++;
    }
    if(cntA>cntD)
    {
    cout<<"Anton";
    }
    else if(cntD>cntA)
    {
        cout<<"Danik";
    }
    else
    {
      cout<<"Friendship";
    }

    return 0;
}
