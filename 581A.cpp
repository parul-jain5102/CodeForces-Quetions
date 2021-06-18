//Problem 581A codeforces
#include <iostream>
using namespace std;
int main()
{   long long int cnta,cntb,maxdays,rest,ans;
    cin>>cnta>>cntb;
    if(cnta>cntb)
    {
        maxdays=cntb;
        rest=cnta-cntb;
        ans=rest/2;
        
    }
     if(cntb>cnta)
    {
        maxdays=cnta;
         rest=cntb-cnta;
        ans=rest/2;
    }
    if(cnta==cntb)
    {
        maxdays=cnta;
        ans=0;
    }
    cout<<maxdays<<" "<<ans;
    
    return 0;
}
