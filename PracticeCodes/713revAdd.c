#include<stdio.h>
//long long int num;
long long int rev(long long int num);
int main()
{
    long long int n1,n2,res1,res2,sum,sum1,tc,a,num;
    scanf("%lld",&tc);
    for(a=0;a<tc;a++)
    {
        scanf("%lld%lld",&n1,&n2);

    res1=rev(n1);
    printf("%lld\n",res1);
    res2=rev(n2);
     printf("%lld\n",res2);
    sum=res1+res2;
     printf("%lld\n",sum);
    sum1=rev(sum);
    printf("%lld\n",sum1);
    }
    return 0;
}

long long int rev(long long int num)
{
    long long int res=0;
   long long int mod;
    if (num!=0)
    {
        mod=num%10;
        num=num/10;
        printf("%lld F\n",mod);
        res=(res*10)+mod;
        num=rev(num);
    }
    return res;
}
