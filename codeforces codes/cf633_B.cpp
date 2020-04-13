/*
contest :
codeforces 633 (div 2)

problem link :
https://codeforces.com/contest/1339/problem/B

tag :
data structure

*/

#include<bits/stdc++.h>
#include<queue>
#include<stack>
using namespace std;

priority_queue<long long int> dd;
priority_queue<long long int> nd;
stack <long long int> rs;
int main()
{
    long long int tc,a,b,c,n;
    cin>>tc;
    for(a=0;a<tc;a++)
    {
        cin>>n;
        for(b=0;b<n;b++)
        {
            cin>>c;
            dd.push(c);
            c=c*(-1);
            nd.push(c);

        }
        for(b=0;b< n/2; b++)
        {


            c=nd.top();
            c=c*(-1);
            rs.push(c);
            nd.pop();

            c=dd.top();
            rs.push(c);
            dd.pop();

        }

        if(n%2==1)
        {
            c=dd.top();
            rs.push(c);
            dd.pop();
            nd.pop();
        }
        while(dd.empty()==0)
        {
            dd.pop();
            nd.pop();
        }
        for(b=0;b<n;b++)
        {
            c=rs.top();
            cout<<c<<" ";
            rs.pop();
        }
        cout<<endl;

    }
    return 0;
}


