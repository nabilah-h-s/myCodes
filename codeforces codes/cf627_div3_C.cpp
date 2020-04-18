/*
contest :
codeforces 627 (div 3)

problem link :
https://codeforces.com/contest/1324/problem/C

tag :
implementation

*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    char ar;
    long long int tc,a,b,p1,d,mx;
    cin>>tc;
scanf("%c",&ar);

    for(a=0;a<tc;a++)
    {
        p1=0;
        mx=0;
        for(b=1;  ; b++)
        {
          scanf("%c",&ar);

            if(ar=='R')
            {
                d=b-p1;
                p1=b;
                if(mx<d)
                {
                    mx=d;
                }
            }
            else if(ar=='\n')
            {
                d=b-p1;
                if(mx<d)
                {
                    mx=d;
                }
                break;
            }
        }
        cout<<mx<<endl;
    }
}
