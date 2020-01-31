/*
exp 5 : based on recursion
1. factorial of a number
2. fibonacci series from 1st to nth position
3. tower of hanoi
*/

#include<stdio.h>
long long int rf (long long int q);
int main()
{
    long long int p,r;
    while(1)
    {
    printf("enter a non-negetive number to find out the factorial or a negetive number to quit\n");
    scanf("%lld",&p);
    if(p<0)
        return 0;
    r=rf(p);
    printf("%lld! is %lld\n",p,r);
    }
    return 0;
}

long long int rf (long long int q)
{
    if(q==1 || q==0)
        return 1;
    else
        return q*(rf(q-1));
}
