main()
{
    int m,n,q,i,j,k;
    int a[101][101]={0};
    int b[101][101]={0};
    int c[101][101]={0};
    scanf("%d %d",&m,&q);
    for(i=0;i<=m-1;i++)
    {
       for(j=0;j<=q-1;j++)
       {
           scanf("%d",&a[i][j]);
       }
    }
    scanf("%d %d",&q,&n);
    for(i=0;i<=q-1;i++)
    {
       for(j=0;j<=n-1;j++)
       {
           scanf("%d",&b[i][j]);
       }
    }
    for(i=0;i<=m-1;i++)
    {
       for(j=0;j<=n-1;j++)
       {
           for(k=0;k<=q;k++)
           c[i][j]=a[i][k]*b[k][j]+c[i][j];
       }
    }
    for(i=0;i<=m-1;i++)
    {
       for(j=0;j<=n-1;j++)
       {
           if(j!=n-1) printf("%d ",c[i][j]);
           else printf("%d\n",c[i][j]);
       }
    }
    getchar();
    getchar();
}
