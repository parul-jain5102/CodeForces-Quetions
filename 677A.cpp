// Problem 677A codeforces solution
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
    int n,h;
    cin>>n>>h;
    // vector<int> v;
    int width=0;
    for(int i=0;i<n;i++)
    {
        // cin>>v[i];
        int a;
        cin>>a;
        if(a<=h)
        {
            width=width+1;
        }
        else
        {
            width=width+2;
        }
    }
    cout<<width;
    return 0;
}
