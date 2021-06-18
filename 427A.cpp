//Problem 427A codeforces
#include <bits/stdc++.h>
using namespace std;
int main()
{
int n,noOfPol=0,CrimeSolved=0,CrimeUnsolved=0;
cin>>n;
for(int i=1;i<=n;i++)
{
   int x;
   cin>>x;
   if(x>0)
   {
       noOfPol=noOfPol+x;
   }
   else
   {
       if(noOfPol>=1)
       {
           CrimeSolved++;
           noOfPol--;
       }
       else
       {
           CrimeUnsolved++;
       }

   }
}
cout<<CrimeUnsolved;
    return 0;
}
