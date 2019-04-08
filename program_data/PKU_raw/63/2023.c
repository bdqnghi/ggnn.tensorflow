main()
{
    int x,y,q;
    int a[100][100],b[100][100],c[100][100];
    scanf("%d%d",&x,&q);

    for (int i = 0;i < x;i ++)
        for (int j = 0;j < q;j ++)
            scanf("%d",&a[i][j]);
    scanf("%d%d",&q,&y);

    for (int i = 0;i < q;i ++)
        for (int j = 0;j < y;j ++)
            scanf("%d",&b[i][j]);
    for (int i = 0;i < x;i ++)
        for (int j = 0;j < y;j ++)
        {
            c[i][j]=0;
            for (int s = 0;s < q;s ++)
                c[i][j]=c[i][j]+a[i][s]*b[s][j];
        }
    for (int i = 0;i < x;i ++)
    {
        for (int j = 0;j < y;j ++)
        {
            if (j == 0)
                printf("%d",c[i][j]);
            else
                printf(" %d",c[i][j]);
        }
        printf("\n");
    }
}