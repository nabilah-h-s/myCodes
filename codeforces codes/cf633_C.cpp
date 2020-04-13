/*
contest :
codeforces 633 (div 2)

problem link :
https://codeforces.com/contest/1339/problem/C

tag :
greedy , math , implementation

*/

#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int tc,a,b,c,d,r,n,ans,mx,mx2,ar,ar1;
    cin>>tc;

    for(a=0; a<tc; a++)
    {
        cin>>n;
        cin>>ar1;
        mx=ar1;
        mx2=0;
        for(b=1; b<n; b++)
        {
            cin>>ar;
            if(mx<ar)
            {
                mx=ar;
            }
            else
            {
                d=mx-ar;
                if(d>mx2)
                {
                    mx2=d;
                }

            }

        }
        if(mx2>0)
        {
            r=1;
            for(b=1;   ; b++)
            {
                ans=r*2;
                if(ans>mx2)
                    break;
                r=ans;
            }
            cout<<b<<endl;
        }
        else
        {
            cout<<0<<endl;
        }

    }
    return 0;
}
