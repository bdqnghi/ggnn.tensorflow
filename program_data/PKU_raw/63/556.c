main()
{
    int a[100][100],b[100][100],c[100][100]={0};
    int x1,x2,y1,y2,i,j,k,max;
    scanf("%d",&x1);
    scanf("%d",&y1);
    for(i=0;i<x1;i++)
    {
        for(j=0;j<y1;j++)
            scanf("%d",&a[i][j]);
    }
    scanf("%d",&x2);
    scanf("%d",&y2);
    for(i=0;i<x2;i++)
    {
        for(j=0;j<y2;j++)
            scanf("%d",&b[i][j]);
    }
    for(i=0;i<x1;i++)
    {
        for(j=0;j<y2;j++)
            {
                for(k=0;k<x2;k++)
                    c[i][j]+=a[i][k]*b[k][j];
            }
    }
    for(i=0;i<x1;i++)
    {
        for(j=0;j<y2;j++)
        {
            if(j==0&&j!=y2-1)
                printf("%d",c[i][j]);
            else if(j!=0&&j==y2-1)
                printf(" %d\n",c[i][j]);
            else if(j==0&&j==y2-1)
                printf("%d\n",c[i][j]);
            else    printf(" %d",c[i][j]);
        }
    }
    getchar();
    getchar();
}
