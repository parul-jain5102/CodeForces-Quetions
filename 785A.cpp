//Problem 785A codeforces
#include <bits/stdc++.h>
using namespace std;
int main()
{
int n,faces=0;
cin>>n;
  
for(int i=0;i<n;i++)
{
    string str;
    cin>>str;
    if(str[0]==73)
    {
        faces=faces+20;
    }
    if(str[0]==68)
    {
        faces=faces+12;
    }
    if(str[0]==79)
    {
        faces=faces+8;
    }
    if(str[0]==67)
    {
        faces=faces+6;
    }
    if(str[0]==84)
    {
        faces=faces+4;
    }
       
}
cout<<faces;
return 0;
 
}
