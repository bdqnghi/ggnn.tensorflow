int main()
{
    int m,n,i,j;
    int a[22][22],b[22][22];
    for(i=0;i<22;i++)
    {
        for(j=0;j<22;j++)
        {
            a[i][j]=-1;
            b[i][j]=0;
        }
    }
    scanf("%d %d",&m,&n);
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(a[i][j]>=a[i-1][j]&&a[i][j]>=a[i+1][j]&&a[i][j]>=a[i][j-1]&&a[i][j]>=a[i][j+1])
            {
                b[i][j]=1;
            }
        }
    }
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(b[i][j]==1)
            {
                printf("%d %d\n",i-1,j-1);
            }
        }
    }
    return 0;
}
