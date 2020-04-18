/*
contest :
codeforces 627 (div 3)

problem link :
https://codeforces.com/contest/1324/problem/B

tag :
LCS, subsequence palindrome

*/

#include<bits/stdc++.h>
using namespace std;

 long long int tc,a,b,c,ar[5005],br[5005],cr[5005][5005],n;

int main()
{

    cin>>tc;
    for(a=0;a<tc;a++)
    {
        cin>>n;
        cr[0][0]=0;
        for(b=1;b<=n;b++)
        {
            cin>>ar[b];
            br[n+1-b]=ar[b];
            cr[0][b]=0;
            cr[b][0]=0;
        }
        for(b=1;b<=n;b++)
        {
            for(c=1;c<=n;c++)
            {
                if(ar[b]== br[c])
                {
                  cr[b][c]=(cr[b-1][c-1])+1;
                }
                else
                {
                    cr[b][c]=max(cr[b-1][c],cr[b][c-1]);
                }
            }
        }

        if(cr[n][n]>=3)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }

    }
    return 0;
}
