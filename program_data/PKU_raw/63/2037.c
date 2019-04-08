main()
{
      int x1,y1;
      scanf("%d%d",&x1,&y1);
      int a[100][100];
      int i,j;
      for(i=0;i<x1;i++)
      {
        for(j=0;j<y1;j++)
             scanf("%d",&a[i][j]);
      }
      int x2,y2;
      scanf("%d%d",&x2,&y2);
      int b[100][100];
      for(i=0;i<x2;i++)
      {
         for(j=0;j<y2;j++)
               scanf("%d",&b[i][j]);
      }
      int c[100][100];
      int k;
      for(i=0;i<x1;i++)
      for(j=0;j<y2;j++)
      {
                       for(k=0;k<x2;k++)
                            c[i][j]+=a[i][k]*b[k][j];
      }
      for(i=0;i<x1;i++)
      {
                       for(j=0;j<y2-1;j++)
                             printf("%d ",c[i][j]);
                        printf("%d\n",c[i][j]);
      }
      
} 
