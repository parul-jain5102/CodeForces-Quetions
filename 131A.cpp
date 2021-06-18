//Problem 131A codeforces
#include <bits/stdc++.h>
using namespace std;
int main()
{
string str;
cin>>str;
    int flag=0;
    for(int i=1;i<str.length();i++)
    {
        if(islower(str[i]))
        {
            flag=1;
            break;
        }
    }
    if(flag==0 )
    {
        if(islower(str[0]))
        str[0] = toupper(str[0]);
        else
        str[0] = tolower(str[0]);
        for(int i=1;i<str.length();i++)
        {
            str[i] = tolower(str[i]);
        }
    }
 
    cout<<str;
 
}
