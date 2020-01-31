#include<stdio.h>
long long int ar[500];
long long int binsrch( long long int ,long long );
long long int binsrchul( long long int num,long long int n);
long long int binsrchll( long long int num,long long int n);
int main()
{
   long long int num,p,a,n;
   scanf("%lld",&n);
   for(a=0;a<n;a++)
   scanf("%lld",&ar[a]);
   scanf("%lld",&num);//num to search the number

   p=binsrch(num,n);
   if(p==-1)printf("not found\n");
   else{printf("found & it is %lld th element\n",p);}

   p=binsrchul(num,n);
   if(p==-1)printf("not found\n");
   else{printf("found & its upper limit is %lld th element\n",p);}

   p=binsrchll(num,n);
   if(p==-1)printf("not found\n");
   else{printf("found & its lower limit is %lld th element\n",p);}


   return 0;
}

long long int binsrch( long long int num,long long int n)
{
    long long int low,mid,high,p;
    low=0;
   high=n-1;
   while(low<=high)
   {
       mid=(low+high) /2;
       if(num==ar[mid])
       {
           break;
       }
       else if(ar[mid]<num)
       {
           low=mid+1;
       }
       else
       {
           high=mid-1;
       }
   }
    if(low>high)
        p=-1;
    else
        p=mid+1;
    return p;
}


long long int binsrchul( long long int num,long long int n)
{
    long long int low,mid,high,p;
    low=0;
   high=n-1;
   while(low<=high)
   {
       mid=(low+high) /2;
       if(num==ar[mid])
       {
           while(num==ar[mid])
           {
               mid++;
           }
           mid--;
           break;
       }
       else if(ar[mid]<num)
       {
           low=mid+1;
       }
       else
       {
           high=mid-1;
       }
   }
    if(low>high)
        p=-1;
    else
        p=mid+1;
    return p;
}


long long int binsrchll( long long int num,long long int n)
{
    long long int low,mid,high,p;
    low=0;
   high=n-1;
   while(low<=high)
   {
       mid=(low+high) /2;
       if(num==ar[mid])
       {
           while(num==ar[mid])
           {
               mid--;
           }
           mid++;
           break;
       }
       else if(ar[mid]<num)
       {
           low=mid+1;
       }
       else
       {
           high=mid-1;
       }
   }
    if(low>high)
        p=-1;
    else
        p=mid+1;
    return p;
}
