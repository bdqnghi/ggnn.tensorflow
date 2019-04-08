int max(int a,int b)
{
    if(a>=b)
    return a;
    else
    return b;
}
main()
{
    char a[300];
    char b[300];
    int c[300]={0};
    int d[300]={0};
    int p,u=0,v=0;
    int i,j,m,n,x=0,y=0;
    scanf("%s",a);
    scanf("%s",b);
        m=strlen(a);
        n=strlen(b);
    for(i=0;i<m;i++)
    {
        if(a[i]=='0')
        {
            u=0;
        }
        else
        {
            u++;
        }
    }
    for(j=0;j<n;j++)
    {
        if(b[j]=='0')
        {
            v=0;
        }
        else
        {
            v++;
        }
    }
    if(u==0&&v==0)
    {
        printf("%d",v);
    }
    else
    {
        for(i=m-1;i>=0;i--)
        {
            c[x]=a[i]-'0';
            x++;
        }
        for(j=n-1;j>=0;j--)
        {
            d[y]=b[j]-'0';
            y++;
        }
        for(i=0;i<max(m,n);i++)
        {
            if(c[i]+d[i]<10)
            {
                c[i]=c[i]+d[i];
            }
            else
            {
                c[i]=c[i]+d[i]-10;
                c[i+1]=c[i+1]+1;
            }
        }
        for(j=299;c[j]==0;j--)
        {
            p=0;
        }
        p=j;
        for(i=p;i>=0;i--)
        {
            printf("%d",c[i]);
        }
    }
}
