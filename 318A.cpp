//Problem 318A codeforces
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, k,num;
    cin>>n>>k;
    if(n%2==0) //even
    {
        if(k<=n/2)
        {
           num=(2*k)-1;
        }
        else
        {
             k=k-(n/2);
             num=(k*2);
        }
    }
    else //odd
    {
        if(k<=(n+1)/2)
        {
            num=(2*k)-1;
        }
        else
        {
             k=k-((n+1)/2);
             num=(k*2);
            
        }

    }
     cout<<num;


    return 0;
}
