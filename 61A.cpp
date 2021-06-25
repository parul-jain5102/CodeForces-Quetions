//Problem 61A solution codeforces
#include <bits/stdc++.h>
using namespace std;
int main()
{
    fast
#ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
string str1,str2,str3="";
cin>>str1>>str2;
for(int i=0;i<str1.length();i++)
{
    if(str1[i]==str2[i])
    {
       str3+="0";
    }
    else
       str3+="1";
}
for(int i=0;i<str1.length();i++)
{
    cout<<str3[i];
}
 
 
 
}
