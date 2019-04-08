int f(int m,int n)
{
    int k;
    if(m==0||n==1)
    {k=1;}
    else
    {
        if(m>=n)
        {k=f(m,n-1)+f(m-n,n);}
        else
        {k=f(m,m);}
    }
    return k;
}
main()
{
    int m,n,t,p;
    scanf("%d",&t);
    for(;t!=0;t--)
    {
        scanf("%d %d",&m,&n);
        printf("%d\n",f(m,n));
    }
}



