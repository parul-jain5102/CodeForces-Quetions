// Problem 486A codeforces solution
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
    long long int n,sum=0;
    cin>>n;
    if(n%2==0){
        sum=n/2;
    }
    if(n%2==1){
        sum=-1 * ((n+1)/2);
    }
    cout<<sum;
    
    return 0;
}
