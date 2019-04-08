int f(int n,int m)
{
    int i,sushu,j;
    sushu=0;
    for(i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            sushu=-1;
        }

    }
    if(sushu==0)
    {
        for(j=2;j<=sqrt(m-n);j++)
        {
            if((m-n)%j==0)
            {
                sushu=-1;
            }
        }
    }
    if(sushu==0)
    {
        printf("%d %d\n",n,m-n);
    }
}


int main()

{
    int exp,c,b,a[100],days,w,m;
    int i,t,T,n,s,t2,j,k,len,x,y,ip,u;

    long e,p,q,r,sp,sq,sr;

    double d,h,g[100];

    scanf("%d",&m);
    for(i=3;i<=m/2;i=i+2)
    {
        f(i,m);
    }
    return 0;
}
