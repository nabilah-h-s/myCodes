/*
contest :
codeforces 635 (div 2)

problem link :
https://codeforces.com/contest/1337/problem/B

tag :
math,greedy

*/

#include<bits/stdc++.h>

using namespace std;
int main()
{
    long long int tc,a,b,c,d,n,p,q,h,f;
    cin>>tc;
    for(a=0;a<tc;a++)
    {
      cin>>n>>p>>q;
      h=n;
      f=0;
      for(b=0;b<p;b++)
      {
          c=(h-(10*q));
          if(h-(10*q)<=0)
          {
              f++;

          }
          h=floor(h/2)+10;



      }
      if(h-(10*q)<=0)
          {
              f++;
          }

      if(f>0)
      {
          cout<<"YES\n";
      }
      else
      {
          cout<<"NO\n";
      }
    }
    return 0;
}

