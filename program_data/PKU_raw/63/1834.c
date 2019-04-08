main()
{
      int a[100][100],b[100][100],c[100][100]={0};
      int x1,y1,x2,y2;
      int i,j;
      scanf("%d %d",&x1,&y1);
      for(i=0;i<x1;i++)
      {
                       for(j=0;j<y1;j++)
                       {
                                        scanf("%d",&a[i][j]);
                       }
      }
      int p,q;
      scanf("%d %d",&x2,&y2);
      for(p=0;p<x2;p++)
      {
                       for(q=0;q<y2;q++)
                       {
                                        scanf("%d",&b[p][q]);
                       }
      }
      for(int m=0;m<x1;m++)
      {
              for(int n=0;n<y2;n++)
              {
                      for(int x=0;x<y1;x++)
                      {c[m][n]=c[m][n]+a[m][x]*b[x][n];}
              }
      }
      for(int m=0;m<x1;m++)
      {
              int n;
              for(n=0;n<y2-1;n++)
              {
                      printf("%d ",c[m][n]);
              }
                      if(n==y2-1)
                      printf("%d\n",c[m][n]);
      }
      }
