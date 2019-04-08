int fa(int a[][101],int n)
{
    if(n==1) return 0;
    int i,j,min,t;
    for(i=1;i<=n;i++)
    {
        min=a[i][1];
        for(j=2;j<=n;j++)
        {
            if(a[i][j]<min)
            min=a[i][j];
        }
        for(j=1;j<=n;j++) a[i][j]=a[i][j]-min;
    }
    for(i=1;i<=n;i++)
    {
        {
            min=a[1][i];
            for(j=2;j<=n;j++)
            {
                if(a[j][i]<min)
                {
                    min=a[j][i];
                }
            }
            for(j=1;j<=n;j++) a[j][i]=a[j][i]-min;
        }
    }
    t=a[2][2];
    for(i=2;i<n;i++)
    {
        a[1][i]=a[1][i+1];
        a[i][1]=a[i+1][1];
        for(j=2;j<n;j++) a[i][j]=a[i+1][j+1];
    }
    return t+fa(a,n-1);
}
main()
{
    int n,k,i,j,a[101][101];
    scanf("%d",&n);
    for(k=1;k<=n;k++)
    {
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++) scanf("%d",&a[i][j]);
        }
    printf("%d\n",fa(a,n));
    }
}