/*
contest :
codeforces 632 (div 2)

problem link :
https://codeforces.com/contest/1333/problem/B

tag :
implementation

*/





#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int tc,a,b,c,x,y,p,n,f;
    long long ar[100005],br[100005];
    cin>>tc;
    for(a=0;a<tc;a++)
    {
        cin>>x;
        for(b=0;b<x;b++)
        {
            cin>>ar[b];
        }
        p=0;
        n=0;
        f=0;
        for(b=0;b<x;b++)
        {
            cin>>br[b];

             if(br[b]>ar[b])
             {
                 if(p==0)
                 {
                     f++;

                 }
             }
             else if(br[b]<ar[b])
             {
                 if(n==0)
                 {
                     f++;
                 }
             }
             if(ar[b]>0)
            {
                p++;

            }
            else if(ar[b]<0)
            {
                n++;
            }
        }

        if(f==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}

