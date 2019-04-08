int m,n,a[11][11][5]={0};
main()
{
    int xj(int i,int j,int k);
    int i,j,k;
    scanf("%d %d",&m,&n);
    a[5][5][0]=m;
    for (k=0;k<n;k++)
      for (i=4-k;i<7+k;i++)
       for(j=4-k;j<7+k;j++)
    {
        a[i][j][k+1]=xj(i,j,k);
    }
    for (i=1;i<10;i++)
    {
     for(j=1;j<9;j++)
     printf("%d ",a[i][j][n]);
     printf("%d",a[i][9][n]);
     printf("\n");
    }
}
int xj(int i,int j,int k)
{
    int p=0,l;
    for ( l=-1;l<2;l++)
    p=p+a[i+l][j][k]+a[i+l][j-1][k]+a[i+l][j+1][k];
    return p+a[i][j][k];
}
