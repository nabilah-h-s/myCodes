/*
contest :
codeforces 627 (div 3)

problem link :
https://codeforces.com/contest/1324/problem/D

tag :
sort, binary search, implementation

*/

#include<bits/stdc++.h>
using namespace std;

long long int ar[200005],br[200005],cr[200005],p,n,z,c,tc,a,b,cnt,l;
int main()
{

    cin>>tc;
    for(a=0; a<tc; a++)
    {
        cin>>ar[a];
    }
    p=0;
    n=0;
    z=0;
    for(a=0; a<tc; a++)
    {
        cin>>b;

        c=ar[a]-b;
        if(c>0)
        {
            br[p]=c;
            p++;
        }
        else if(c<0)
        {
            cr[n]=c*(-1);
            n++;
        }
        else
        {
            z++;
        }

    }
    sort(cr,cr+n);
    cnt=0;
        cnt= z*p;
    for(a=0; a<p; a++)
    {

        l= lower_bound(cr,cr+n,br[a])-cr;
        cnt=cnt+l;

    }
    if(p%2==0)
        cnt=cnt + ((p/2)*(p-1));
    else
        cnt=cnt +(p*((p-1)/2));
    cout<<cnt<<endl;
    return 0;
}
