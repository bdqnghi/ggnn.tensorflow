int main()
{
    int x1,y1;
    int x2,y2;
    int i=0,j=0;
    scanf("%d %d",&x1,&y1);
    int **aa;
    aa=(int **)malloc(sizeof (int *)*x1);
    for(i=0;i<x1;i++)
    {
        aa[i]=(int *)malloc(sizeof(int)*y1);
        for(j=0;j<y1;j++)
        scanf("%d",&aa[i][j]);
    }
    scanf("%d %d",&x2,&y2);
    int **bb;
    bb=(int **)malloc(sizeof (int *)*x2);
    for(i=0;i<x2;i++)
    {
        bb[i]=(int *)malloc(sizeof(int)*y2);
        for(j=0;j<y2;j++)
        scanf("%d",&bb[i][j]);
    }
    int **cc;
    cc=(int **)malloc(sizeof (int *)*x1);
    for(i=0;i<x1;i++)
    {
        cc[i]=(int *)malloc(sizeof(int)*y2);
        for(j=0;j<y2;j++)
            cc[i][j]=0;
        for(j=0;j<y2;j++)
            for(int p=0;p<x2;p++)
                cc[i][j]+=aa[i][p]*bb[p][j];
    }
    for(i=0;i<x1;i++)
    {
        for(j=0;j<y2-1;j++)
            printf("%d ",cc[i][j]);
        printf("%d\n",cc[i][j]);
    }
    return 0;
}
