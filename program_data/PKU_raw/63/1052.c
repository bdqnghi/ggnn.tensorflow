main()
{
      int n,m;
      int n1,m1;
      scanf("%d%d",&n,&m);
      int a[n][m];
      for(int i=0;i<n;i++)
      for(int j=0;j<m;j++)
      {
              scanf("%d",&a[i][j]);
      }
      scanf("%d%d",&n1,&m1);
      int b[n1][m1];
      for(int i=0;i<n1;i++)
      for(int j=0;j<m1;j++)
      {
              scanf("%d",&b[i][j]);
      }
      int c[n][m1];
      for(int i=0;i<n;i++)
      for(int j=0;j<m1;j++)
      {
              c[i][j]=0;
      }
      int g,q;
      for(int i=0;i<n;i++)
      for(int j=0;j<m1;j++)
      {
              for(int x=0;x<m;x++)
              {
                      c[i][j]+=a[i][x]*b[x][j];
                      g=c[i][j];
                      q=a[i][x]*b[x][j];
              }
      }
      int count=0;
      for(int i=0;i<n;i++)
      for(int j=0;j<m1;j++)
      {
              if(!count)
              printf("%d",c[i][j]);
              else
              printf(" %d",c[i][j]);
              count=1;
              if(j==m1-1)
              {
                         printf("\n");
                         count=0;
              }
      }
}
