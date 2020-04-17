/*
contest :
codeforces 634 (div 3)

problem link :
https://codeforces.com/contest/1335/problem/D

tag :
implementation

*/

#include<bits/stdc++.h>
#include<string>
#define ll long long int
using namespace std;

int main()
{
    ll tc,a,b,c,d ;
    string ar[11];
    cin>>tc;

    for(a=0; a<tc; a++)
    {

        for(b=0; b<9; b++)
        {
            cin>>ar[b];
        }

        /* 9 points form each block , each row, each column can also be chosen-
                ar[0][6]=ar[0][5];
                ar[1][1]=ar[1][0];
                ar[2][5]=ar[3][5];
                ar[3][8]=ar[2][8];
                ar[4][2]=ar[4][0];
                ar[5][4]=ar[6][4];
                ar[6][7]=ar[6][6];
                ar[7][0]=ar[7][1];
                ar[8][3]=ar[8][2];

                */

        for(b=0; b<9; b++)
        {
            for(c=0; c<9; c++)
            {
                if(ar[b][c]=='9')
                    cout<<'8';
                else
                    cout<<ar[b][c];
            }
            cout<<endl;
        }
        cout<<endl;
    }
    return 0;
}

