#include<stdio.h>
#include<iostream>
#include<vector>
#include<queue>
#define inf 123456789
using namespace std;

vector<int>vec[50];
int bfs(int s,int e)
{
    int cost[30];
    int i,cn;
    for(i=0;i<=30;i++)
    {
        cost[i]=inf;//large value taken
    }
    queue<int>Q;
    Q.push(s);
    cost[s]=0;// first value 0
    while(!Q.empty())
    {
        cn=Q.front();
        Q.pop();
        int sz=vec[cn].size();
        for(i=0;i<sz;i++)
        {
            int adjn=vec[cn][i];
            if(cost[cn]+1<cost[adjn])
            {
                Q.push(adjn);
                cost[adjn]=cost[cn]+1;
            }
        }
            if (cn==e)
            printf("the cost is %d\n",cost[cn]);
    }

}

int main()
{
    int node,edge,a,u,v,s,e;

    scanf("%d%d",&node,&edge);
    for(a=0;a<edge;a++)
    {
        scanf("%d%d",&u,&v);
        vec[u].push_back(v);
        vec[v].push_back(u);
    }
    scanf("%d%d",&s,&e);

    bfs(s,e);/*starting and ending point for which to calculate minimum cost*/


    return 0;
}
