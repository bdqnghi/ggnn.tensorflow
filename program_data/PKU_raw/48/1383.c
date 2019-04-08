main()
{
    int a[11][11]={0};
    int b[11][11];
    int m,n,k,i,j;
    scanf("%d %d",&m,&n);
    a[5][5]=m;
    for(k=1;k<=n;k++)
    {
        for(i=1;i<=9;i++)
        {
            for(j=1;j<=9;j++)
            {
                b[i][j]=a[i][j]*2+a[i-1][j-1]+a[i-1][j]+a[i-1][j+1]+a[i][j-1]+a[i][j+1]+a[i+1][j-1]+a[i+1][j]+a[i+1][j+1];
            }
        }
        for(i=1;i<=9;i++)
        {
            for(j=1;j<=9;j++)
            {
                a[i][j]=b[i][j];
            }
        }
    }
    for(i=1;i<=9;i++)
        {
            for(j=1;j<=8;j++)
            {
                printf("%d ",a[i][j]);
            }
            printf("%d\n",a[i][j]);
        }
}
