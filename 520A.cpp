//Problem 520A codeforces
#include <bits/stdc++.h>
using namespace std;
int main()
{
int len;
string str;
cin>>len;
cin>>str;
for(int i=0;i<len;i++)
{
    char x=str[i];
    if (isupper(x)) 
       str[i]=str[i]+32;
}
// cout<<str;

map<int,int> mp;
for(int i=0;i<len;i++)
{   int a=str[i];
   mp[a]++;
}
int cnt=0;
// cout << "Alphabet  Frequency" << endl;
    for (auto i : mp)
    {
        if(i.second!=0)
        {
            cnt++;
        }
    }
    // for (auto i : mp)
    //     cout << i.first << "   " << i.second<< endl;
        // cout <<cnt;
if(cnt==26)
{
    cout<<"YES";
}  
else
cout<<"NO";      

return 0;
 
}
