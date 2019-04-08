int main()
{
    int n,m,i;
    scanf("%d%d",&n,&m);
    while(n!=0&&m!=0)
    {
    int bh=0;
    if(n==1){printf("1\n");}
    else
    {
        for(i=2;i<=n;i++)
        {
            bh=(bh+m)%i;
        }
        printf("%d\n",bh+1);
    }
    scanf("%d%d",&n,&m);
    }
    return 0;
}