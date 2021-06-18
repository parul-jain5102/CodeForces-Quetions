//Problem 469A codeforces
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, p,q,cnt=0;
    cin>>n>>p;
    vector<int> v;
    for(int i=1;i<=p;i++)
    {    int temp;
         cin>>temp;
         v.push_back(temp);
    }
    cin>>q;
     for(int j=1;j<=q;j++)
    {    int tempq;
         cin>>tempq;
         v.push_back(tempq);
    }
    
    for(int i=1;i<=n;i++)
    {
      auto it=find(v.begin(),v.end(),i);
      if(it!=v.end()) //present
      {
            cnt++;
      }
    }
    if(cnt==n)
    {
       cout<<"I become the guy."; 
    }
    else
    {
        cout<<"Oh, my keyboard!";
          
    }
      

    return 0;
}
