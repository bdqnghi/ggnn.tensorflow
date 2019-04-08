main()
{
    int m,n;
    scanf("%d",&m);
    scanf("%d",&n);
    int a[11][11];
    int b[9][9];
    for(int i=0;i<11;i++)
    {
        for(int j=0;j<11;j++)
        {
            a[i][j]=0;
        }
    }
    a[5][5]=1;
    for(int i=0;i<9;i++)
    {
        for(int j=0;j<9;j++)
        {
            b[i][j]=0;
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<9;j++)
        {
            for(int k=0;k<9;k++)
            {
                b[j][k]=2*a[j+1][k+1]+a[j][k]+a[j][k+1]+a[j][k+2]+a[j+1][k]+a[j+1][k+2]+a[j+2][k]+a[j+2][k+1]+a[j+2][k+2];
            }
        }
        for(int j=0;j<9;j++)
        {
            for(int k=0;k<9;k++)
            {
                a[j+1][k+1]=b[j][k];
            }
        }
    }
        for(int i=0;i<9;i++)
        {
            for(int j=0;j<8;j++)
            {
                printf("%d ",b[i][j]*m);
            }
            printf("%d\n",b[i][8]*m);
        }
}