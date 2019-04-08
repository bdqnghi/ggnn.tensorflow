main()
{
    int a,b,c,n,m,l,p,q;
    double k;
    int x[10][3];
    double y[10][10];
    double z[10][10];
    scanf("%d",&n);
    for(a=0;a<=9;a++)
    {
        for(b=0;b<=9;b++)
        y[a][b]=-1;
    }
    for(a=0;a<=n-1;a++)
    {
        for(b=0;b<=2;b++)
        scanf("%d",&x[a][b]);
    }
    for(a=0;a<=n-1;a++)
    {
        for(b=a+1;b<=n-1;b++)
        y[a][b]=sqrt((x[a][0]-x[b][0])*(x[a][0]-x[b][0])+(x[a][1]-x[b][1])*(x[a][1]-x[b][1])+(x[a][2]-x[b][2])*(x[a][2]-x[b][2]));
    }
    for(a=0;a<=9;a++)
    {
        for(b=0;b<=9;b++)
        z[a][b]=y[a][b];
    }
    for(a=1;a<=(((n*n)/2)-(n/2));a++)
    {
        k=-1;
        m=-1;
        l=-1;
        for(b=0;b<=n-1;b++)
        {
            for(c=0;c<=n-1;c++)
            {
                if(y[b][c]>k)
                {
                    m=b;
                    l=c;
                    k=y[b][c];
                }
                else;
            }
        }
        y[m][l]=-1;
        printf("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n",x[m][0],x[m][1],x[m][2],x[l][0],x[l][1],x[l][2],z[m][l]);
    }
}