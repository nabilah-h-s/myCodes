/*
contest :
codeforces 634 (div 3)

problem link :
https://codeforces.com/contest/1335/problem/B

tag :
constructive algorithm

*/

#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll tc,a,b,c,d,cnt,f2,p,q;
    char ch;
    cin>>tc;
    for(a=0;a<tc;a++)
    {
        cin>>b>>p>>q;
        cnt=0;
        f2=0;
        for(c=0; ;c++)
        {
            for(d=0;d<q;d++)
            {
                ch='a'+d;
                cout<<ch;
                cnt++;
                if(cnt==b)
                {
                    f2=1;
                    break;
                    }
            }
            if(f2==1)
            {
                break;
            }
        }
        cout<<endl;
    }
    return 0;
}

