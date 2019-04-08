int main ()
{
    int a,b,c,d,e,k=0;
    for (a=1;a<=5;a++)
    {
        for (b=1;b<=5;b++)
        {
            if (b==a) continue;
            for (c=1;c<=5;c++)
            {
                if ((c==a)||(c==b)) continue;
                for (d=1;d<=5;d++)
                {
                    if ((d==a)||(d==b)||(d==c)) continue;
                    for (e=1;e<=5;e++)
                    {
                        if ((e==a)||(e==b)||(e==c)||(e==d)) continue;
                        if ((e==2)||(e==3)) continue;
                        if ((a==1)||(a==2))
                        {
                            if (e!=1) continue;
                        }
                        else
                        {
                            if (e==1) continue;
                        }
                        if ((b==1)||(b==2))
                        {
                            if (b!=2) continue;
                        }
                        else
                        {
                            if (b==2) continue;
                        }
                        if ((c==1)||(c==2))
                        {
                            if (a!=5) continue;
                        }
                        else
                        {
                            if (a==5) continue;
                        }
                        if ((d==1)||(d==2))
                        {
                            if (c==1) continue;
                        }
                        else
                        {
                            if (c!=1) continue;
                        }
                        if ((e==1)||(e==2))
                        {
                            if (d!=1) continue;
                        }
                        else
                        {
                            if (d==1) continue;
                        }
                        k=1;
                        break;
                    }
                    if (k) break;
                }
                if (k) break;
            }
            if (k) break;
        }
        if (k) break;
    }
    printf("%d %d %d %d %d",a,b,c,d,e);
    return 0;
}
