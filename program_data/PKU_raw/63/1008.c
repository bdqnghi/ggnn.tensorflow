main()
{
    int i,j,k,t;
    int x1,y1;
    scanf("%d %d",&x1,&y1);
    int a[100][100];
    for(i=0;i<x1;i++)
    {
        for(j=0;j<y1;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int x2,y2;
    scanf("%d %d",&x2,&y2);
    int b[100][100];
    for(i=0;i<x2;i++)
    {
        for(j=0;j<y2;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    int c[100][100];
    for(i=0;i<x1;i++)
    {
        for(j=0;j<y2;j++)
        {
            c[i][j]=0;
            for(k=0;k<y1;k++)
            {
                c[i][j]=c[i][j]+a[i][k]*b[k][j];
            }
        }
    }
    for(i=0;i<x1;i++)
    {
        printf("%d",c[i][0]);
        for(j=1;j<y2;j++)
        {
            printf(" %d",c[i][j]);
        }
        printf("\n");
    }
}

