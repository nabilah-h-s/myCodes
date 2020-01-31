//this is the code of minimum spanning tree

#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;

struct data
{
    int u;
    int v;
    int cost;
};

bool cmp(data x,data y)
{
    if(x.cost<y.cost)
        return true;
    else return false;
}

int par[1000];

int findd(int u)
{
    if (par[u]==u)
        return u;
    else
    {
        par[u]=findd(par[u]);
        return par[u];
    }
}

int main()
{
    data a[100];
    int i,m,countt=0,sum=0;
    scanf("%d",&m); //number of connections is m
    for(i=0;i<m;i++)
    {
        scanf("%d%d%d",&a[i].u,&a[i].v,&a[i].cost);
        par[a[i].u]=a[i].u;
    }

    sort(a+0,a+0+m,cmp);

    for(i=0;i<m;i++)
    {
        printf("%d  %d  %d\n",a[i].u,a[i].v,a[i].cost);
    }

    for(i=0;i<m;i++)
    {
        int fu=findd(a[i].u);
        int fv=findd(a[i].v);
        if(fu!=fv)
        {
            par[fu]=fv;
            sum=sum+a[i].cost;
            countt++;
        }
    }
    printf("minimum edge of spanic tree should be %d\n",countt);
    printf("minimum cost should be %d\n",sum);
    return 0;
}
