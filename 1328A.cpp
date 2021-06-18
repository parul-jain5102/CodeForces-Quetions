//Problem 1328A codeforces
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int a,b;
        int moves;
        cin>>a>>b;
        int rem=a%b;
        if(rem!=0)
        { moves=b-rem;
        }
        else 
        {
            moves=0;
        }
        cout<<moves<<endl;
    }
    
  
    return 0;
}
