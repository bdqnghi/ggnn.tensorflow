main()
{
    int x1,y1;
    scanf("%d %d",&x1,&y1);
    int a[x1][y1];
    for(int i=0;i<x1;i++)
    {
        for(int j=0;j<y1;j++)
        scanf("%d",&a[i][j]);
    }
    int x2,y2;
    scanf("%d %d",&x2,&y2);
    int b[x2][y2];
    for(int i=0;i<x2;i++)
    {
        for(int j=0;j<y2;j++)
        scanf("%d",&b[i][j]);
    }
    int c[x1][y2],m;
    m=0;
    for(int i=0;i<x1;i++)
    {
        for(int j=0;j<y2;j++)
        {
            for(int q=0;q<y1;q++)
            {
               m=m+(a[i][q])*(b[q][j]);
            }
               c[i][j]=m;
               m=0;
        }
    }
    int n;
    n=0;
    for(int i=0;i<x1;i++)
    {
        for(int j=0;j<y2;j++)
        {
        n++;
        if(n%y2==0)
        printf("%d\n",c[i][j]);
        else
        printf("%d ",c[i][j]);
        }
    }
}
