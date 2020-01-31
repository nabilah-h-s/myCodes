#include<stdio.h>
#include<queue>
#include<vector>
#include<iostream>
using namespace std;
int main()
{
    long long int n,a,e,te,t1,t2,p,p1,b,d;
    priority_queue<long long int>Q;
    while(scanf("%lld",&n)!=EOF)
    {
        if (n==0)
            break;


        for(a=0; a<n; a++)
        {
            scanf("%lld",&e);
            e=e*(-1);
            Q.push(e);
        }
        p=0;
        p1=0;
        //for(b=1;b<n;b++)
        while(Q.size() >1)
        {
            te=Q.top();
            t1=te*(-1);
            Q.pop();

            te=Q.top();
            t2=te*(-1);
            Q.pop();

            p=t1+t2;

            p1=p+p1;
            d=p*(-1);
            Q.push(d);
        }
        Q.pop();
        //p1=p1*(1);
        printf("%lld\n",p1);
    }
    return 0;
}
