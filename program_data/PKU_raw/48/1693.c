main()
{
    int a[11][11],b[11][11];
    for(int i=0;i<11;i++)
    {
        for(int j=0;j<11;j++)
        {
            a[i][j]=0;
            b[i][j]=0;
        }
    }
    int m,n;
    scanf("%d %d",&m,&n);
    a[5][5]=b[5][5]=m;
    for(int k=0;k<n;k++)
    {
        for(int i=1;i<10;i++)
        {
            for(int j=1;j<10;j++)
            {
                a[i][j]=2*b[i][j]+b[i][j-1]+b[i][j+1]+b[i-1][j-1]+b[i-1][j]+b[i-1][j+1]+b[i+1][j-1]+b[i+1][j]+b[i+1][j+1];
            }
        }
        for(int i=1;i<10;i++)
        {
            for(int j=1;j<10;j++)
            {
                b[i][j]=a[i][j];
            }

        }
    }
    for(int i=1;i<10;i++)
    {
        for(int j=1;j<10;j++)
        {
            if(j%9==0)
            printf("%d\n",a[i][j]);
            else
            printf("%d ",a[i][j]);
        }
    }
}
