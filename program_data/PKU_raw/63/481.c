main()
{
      int x1,x2,y1,y2;
      scanf("%d %d",&x1,&y1);
      int a[100][100];
      for(int i=0;i<x1;i++)
      {
              for(int j=0;j<y1;j++)
              {
                      scanf("%d",&a[i][j]);
              }
      }
      scanf("%d %d",&x2,&y2);
      int b[100][100];
      for(int i=0;i<x2;i++)
      {
              for(int j=0;j<y2;j++)
              {
                      scanf("%d",&b[i][j]);
              }
      }
      int c[100][100];
      for(int i=0;i<x1;i++)
      {
              for(int j=0;j<y2;j++)
              {
                      c[i][j]=0;
              }
      }
      for(int i=0;i<x1;i++)
      {
              for(int j=0;j<y2;j++)
              {
                      for(int k=0;k<y1;k++)
                      {
                              c[i][j]=c[i][j]+a[i][k]*b[k][j];
                      }
              }
      }
      for (int i=0;i<x1;i++)
      {
          for(int j=0;j<y2;j++)
          {
                  if(j<y2-1)
                  printf("%d ",c[i][j]);
                  if(j==y2-1 && i<x1)
                  printf("%d\n",c[i][j]);
                  if(j==y2-1 && i==x1)
                  printf("%d",c[i][j]);
          }
      }
}