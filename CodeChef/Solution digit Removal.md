#### platform : CODECHEF
#### problem link : https://www.codechef.com/OCT21B/problems/DIGITREM

#### flow chart


#### source code

    #include<bits/stdc++.h>
    using namespace std;

    int main()
    {
        int n,d,a,b,c,tc,m,g,f,pos,newPos,h;
        cin>>tc;
        for(c=0; c<tc; c++)
        {
            cin>>n>>d;
        m=n;
        int ar[11];
        a=0;
        f=0;
        h=0;
        while(m)
        {
            ar[a]=m%10;
            m=m/10;
            if(ar[a]==d)
            {
                f=1;
                pos=a;
            }
            a++;
        }
        if(f==0)
            {
                cout<<0<<endl;
            }
        else
        {
            if(d==0)
            {
                h=0;
                for(b=a-1; b>pos; b--)
                {
                    h=(h*10)+ar[b];
                }
                h=(h*10)+1;
                for(b=0; b<pos; b++)
                {
                    h=(h*10)+1;
                }
            }
            else if(d==9)
            {
                if(pos+1<a)
                {
                    if(ar[pos+1]==8)
                    {
                        for(b=pos+1; b<a; b++)
                        {
                            if(ar[b]==8)
                            {
                                newPos=b;
                            }
                            else
                            {
                                break;
                            }
                        }
                        pos=newPos;
                        h=0;
                        for(b=a-1; b>pos; b--)
                        {
                            h=(h*10)+ar[b];
                        }
                        h=h+1;
                        h=(h*10);
                        for(b=0; b<pos; b++)
                        {
                            h=h*10;
                        }
                    }
                    else
                    {
                        h=0;
                        for(b=a-1; b>pos; b--)
                        {
                            h=(h*10)+ar[b];
                        }
                        h=h+1;
                        h=(h*10);
                        for(b=0; b<pos; b++)
                        {
                            h=h*10;
                        }
                    }
                }
                else
                {
                    h=10;
                    for(b=0; b<pos; b++)
                    {
                        h=h*10;
                    }
                }
            }
            else
            {
                h=0;
                for(b=a-1; b>pos; b--)
                {
                    h=(h*10)+ar[b];
                }
                h=(h*10)+(ar[pos]+1);
                for(b=0; b<pos; b++)
                {
                    h=h*10;
                }
            }
            cout<<h-n<<endl;
        }
    }
        return 0;
    }


