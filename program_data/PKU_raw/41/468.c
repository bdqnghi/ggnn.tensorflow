void main()
{
    int x[5],a,b,c,d,e;
    for(a=1;a<=5;a++)
    {
        x[0]=a;
        for(b=1;b<=5;b++)
        {
            if(b==x[0]) continue;
            else
            {x[1]=b;
            for(c=1;c<=5;c++)
            {
                if(c==x[0]||c==x[1]) continue;
                else
                {x[2]=c;
                for(d=1;d<=5;d++)
                {
                    if(d==x[0]||d==x[1]||d==x[2]) continue;
                    else
                    {x[3]=d;
                    for(e=1;e<=5;e++)
                    {
                        if(e==x[0]||e==x[1]||e==x[2]||e==x[3]) continue;
                        else
                        {x[4]=e;
                        if(x[4]==2||x[4]==3) continue;
                        else
                        {
                            if(x[0]==1||x[0]==2)
                            {
                                if(x[4]!=1) continue;
                            }
                            else
                            {
                                if(x[4]==1) continue;
                            }
                            if(x[1]==1||x[1]==2)
                            {
                                if(x[1]!=2) continue;
                            }
                            else
                            {
                                if(x[1]==2) continue;
                            }
                            if(x[2]==1||x[2]==2)
                            {
                                if(x[0]!=5) continue;
                            }
                            else
                            {
                                if(x[0]==5) continue;
                            }
                            if(x[3]==1||x[3]==2)
                            {
                                if(x[2]==1) continue;
                            }
                            else
                            {
                                 if(x[2]!=1) continue;
                            }
                            if(x[4]==1||x[4]==2)
                            {
                                if(x[3]!=1) continue;
                            }
                            else
                            {
                                if(x[3]==1) continue;
                            }
                            printf("%d %d %d %d %d\n",x[0],x[1],x[2],x[3],x[4]);
                        }
                        }
                    }
                    }
                }
                }
            }
            }
        }
    }
}

