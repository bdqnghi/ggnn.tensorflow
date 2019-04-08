main ()
{
    int m,n,a[1000],b[1000];
    void in(int xx[],int,int yy[],int);
    void arr(int ddd[],int);
    void con(int aa[],int,int bb[],int);
    void out(int dd[],int);
    scanf("%d%d",&m,&n);
    in(a,m,b,n);
    arr(a,m);
    arr(b,n);
    con(a,m,b,n);
    out(a,m+n);
}

void in(int xx[],int x,int yy[],int y)
{
    int i;
    for(i=0;i<x;i++)
        scanf("%d",&xx[i]);
    for(i=0;i<y;i++)
        scanf("%d",&yy[i]);
}

void arr(int ddd[],int x)
{
    int i,j,min,k;
    for(i=0;i<x-1;i++)
    {
        min=ddd[i];
        for(j=i+1,k=i;j<x;j++)
        {
            if(ddd[j]<min)
            {
                min=ddd[j];
                k=j;
            }
        }
        ddd[k]=ddd[i];
        ddd[i]=min;
        }
}

void con(int aa[],int x,int bb[],int y) 
{
    int i;
    for(i=x;i<x+y;i++)
        aa[i]=bb[i-x];
    x=x+y;
}

void out(int dd[],int x)
{
    int i;
    printf("%d",dd[0]);
    for(i=1;i<x;i++)
        printf(" %d",dd[i]);
}
