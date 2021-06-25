// Problem 344A codeforces solution
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
    long n;
    cin>>n;
    int mag=1;
    vector<string> val;
    for(int i=0;i<n;i++)
    {
        string x;
        cin>>x;
        val.push_back(x);
    }
    for(int i=0;i<n-1;i++)
    {
        if(val[i][1]==val[i+1][0])
        {
            mag++;
        }
    }
    cout<<mag;
    return 0;
}
