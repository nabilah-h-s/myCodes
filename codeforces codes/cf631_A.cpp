/*
contest :
codeforces 631 (div 2)

problem link :
https://codeforces.com/contest/1330/problem/A

tag :
implementation

*/


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ar[205],tc,a,b,c,n,x,f,d;
    cin>>tc;

    for(a=0; a<tc; a++)
    {
        for(d=0; d<205; d++)
        {
            ar[d]=0;
        }
        cin>>n;
        cin>>x;
        for(b=0; b<n; b++)
        {
            cin>>c;
            ar[c]=ar[c]+1;
        }
        f=0;
        for(b=1; b<201; b++)
        {
            if(ar[b]==0)
            {

                f=f+1;
                if(f>x)
                {
                    break;
                }

            }

        }
        cout<<b-1<<endl;

    }
    return 0;
}
