/*
contest :
codeforces 634 (div 3)

problem link :
https://codeforces.com/contest/1335/problem/A

tag :
math

*/

#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll tc,a,b,c,d;
    cin>>tc;
    for(a=0;a<tc;a++)
    {
        cin>>b;
        if(b%2==0)
        {
            b=b-1;
        }
        c=b/2;
        cout<<c<<endl;
    }
    return 0;
}

