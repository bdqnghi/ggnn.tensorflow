main()
{
    int n,d;
    int a[9][9],b[9][9];
    scanf("%d %d",&n,&d);
    for(int i=0;i<9;i++)
    for(int j=0;j<9;j++)
    {
        a[i][j]=0;
        b[i][j]=0;
    }
    a[4][4]=n;
    b[4][4]=n;
    for(int i=0;i<d;i++)
    {
        for(int k=0;k<9;k++)
        for(int j=0;j<9;j++)
        {
        b[k][j]*=2;
        if(k!=0)b[k][j]+=a[k-1][j];
        if(k!=8)b[k][j]+=a[k+1][j];
        if(j!=0)b[k][j]+=a[k][j-1];
        if(j!=8)b[k][j]+=a[k][j+1];
        if(k!=0&&j!=0)b[k][j]+=a[k-1][j-1];
        if(k!=8&&j!=0)b[k][j]+=a[k+1][j-1];
        if(k!=8&&j!=8)b[k][j]+=a[k+1][j+1];
        if(k!=0&&j!=8)b[k][j]+=a[k-1][j+1];
        }
        for(int k=0;k<9;k++)
        for(int j=0;j<9;j++)
        a[k][j]=b[k][j];
    }
    for(int i=0;i<9;i++)
    for(int j=0;j<9;j++)
    {
        if(j!=8) printf("%d ",a[i][j]);
        else printf("%d\n",a[i][j]);
    }
}