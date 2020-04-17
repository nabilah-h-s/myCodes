/*
contest :
codeforces 634 (div 3)

problem link :
https://codeforces.com/contest/1335/problem/C

tag :
math, implementation

*/

#include<bits/stdc++.h>
#define ll long long int
using namespace std;

ll ar[200006];
int main()
{
    ll tc,a,b,c,d,x,u,mx,mn;

    cin>>tc;
    for(a=0;a<tc;a++)
    {
        for(b=0;b<(2*100002);b++)
        {
            ar[b]=0;
        }
        cin>>x;
        mx=-1;
        u=0;
        for(b=0;b<x;b++)
        {
            cin>>c;
            if(ar[c]==0)
            {
                u++;
            }
            ar[c]++;
            if(ar[c]>mx)
            {
                mx=ar[c];
            }
        }

            if(u==mx)
            {
                cout<<(u-1)<<endl;
            }
            else
            {
                 mn=min(u,mx);
                 cout<<mn<<endl;
            }




    }
    return 0;
}

