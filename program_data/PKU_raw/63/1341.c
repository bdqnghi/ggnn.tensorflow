main()
{
    int a[100][100];
    int b[100][100];
    int c[100][100]={{0}};
    int i,j,i1,j1,i2,j2,k;
    scanf("%d %d",&i1,&j1);
    for (i=0;i<=i1-1;i++)
    {
        for(j=0;j<=j1-1;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    scanf("%d %d",&i2,&j2);
    for (i=0;i<=i2-1;i++)
    {
        for(j=0;j<=j2-1;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for (i=0;i<=i1-1;i++)
    {
        for (j=0;j<=j2-1;j++)
        {
            for (k=0;k<=j1-1;k++)
            {
                c[i][j] += a[i][k]*b[k][j];
            }
            if (j==j2-1)
            {
                printf("%d",c[i][j]);
            }
            else
            {
                printf("%d ",c[i][j]);
            }
        }
        printf("\n");
    }
}
