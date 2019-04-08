int main()
{
    int lj(int a[],int n,int m);
    int n,m,i,j,l,k=0,s,t=0,a[25],b[25];
    scanf("%d",&k);
    for(i=0;i<k;i++)
        scanf("%d",&a[i]);
    for(i=0;i<k;i++)
        b[i]=lj(a,i,k);
    for(i=0;i<k;i++)
        {
            if(t<b[i])
                t=b[i];
        }
    printf("%d",t);
    getchar();
    getchar();
    getchar();
}
int lj(int a[],int n,int m)//n????m??? 
{
    int i,t,p,l=0,b[25];
    if(n==m-1)
    return 1;
    else
    {
    for(i=0;i<25;i++)
        b[i]=0;
    for(i=n+1;i<m;i++)
        {
            if(a[i]<=a[n])
                    {
                          b[i]=lj(a,i,m);
                    }
        }
    t=b[n+1];
    for(i=n+1;i<m;i++)
        {
            if(t<b[i])
            t=b[i];
        }
    return t+1;
    }
}
