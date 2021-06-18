//Problem 996A codeforces
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long n;
    cin>>n;
    long count=0;
    int a[]= {1,5,10,20,100};
    for(int i=4;i>=0;i--)
    {
        if(n/a[i]>=1&&n!=0)
        {
            count += n/a[i];
            n=n%a[i];
        }
    }
    cout<<count;
    return 0;
}
