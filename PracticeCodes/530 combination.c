#include<stdio.h>
long long int fact(long long int num);
int main()
{
    long long int n,r,nr,N,R,NR,com,num;
    while(scanf("%lld%lld",&n,&r)!=EOF)
    {
        if (n==0 && r==0)
            break;
        N=fact(n);
        printf("%lld N\n",N);
        R=fact(r);
        printf("%lld R\n",R);
        nr=n-r;
        if (n!=r)
            NR=fact(nr);
        else
            NR=1;

        printf("%lld NR\n",NR);
        com=N/(NR*R);
        printf("%lld\n",com);
    }
    return 0;
}

long long int fact(long long int num)
{
    long long int f;
    if(num==0)
        return 1;
    else
        f=num*fact(num-1);
    return f;
}
