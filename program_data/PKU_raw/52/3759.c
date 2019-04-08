int main()
{
    int num[1000],n,m,i;
    scanf("%d",&n);
    scanf("%d",&m);
    for(i=1;i<=n;i++)
{scanf("%d",&num[i]);}
    for(i=n+1;i<=2*n;i++)
    {num[i]=num[i-n];}
    for(i=n+1-m;i<=2*n-m;i++)
    {if(i==n+1-m)
    printf("%d",num[i]);
    else
    printf(" %d",num[i]);}
    getchar();
    getchar();
    return 0;}
