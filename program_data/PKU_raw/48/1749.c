int main()
{
    int a[11][11],n,i,j,x,b[11][11];
    for(i=0;i<=10;i++)
        for(j=0;j<=10;j++)
            a[i][j]=0;
    for(i=0;i<=10;i++)
        for(j=0;j<=10;j++)
            b[i][j]=0;
    scanf("%d",&a[5][5]);
    scanf("%d",&n);
    for(x=1;x<=n;x++)
    {    for(i=1;i<=9;i++)
             for(j=1;j<=9;j++)
                 b[i][j]=a[i][j]*2+a[i+1][j+1]+a[i+1][j]+a[i+1][j-1]+a[i][j+1]+a[i][j-1]+a[i-1][j+1]+a[i-1][j]+a[i-1][j-1];
         for(i=1;i<=9;i++)
             for(j=1;j<=9;j++)
                 a[i][j]=b[i][j];
    }
    for(i=1;i<=9;i++)
    {
                     printf("%d",b[i][1]);
                     for(j=2;j<=9;j++)
                         printf(" %d",b[i][j]);
                     printf("\n");
    }
    return 0;
}
