
main()
{
      int x1,y1;
      scanf("%d %d",&x1,&y1);
      int a[x1][y1],i,j,k;
      for(i=0;i<x1;i++)
      {
             for(j=0;j<y1;j++)
             {
                   if(j == 0) scanf("%d",&a[i][j]);
                   else       scanf(" %d",&a[i][j]);
             }
      } 
      int x2,y2;
      scanf("%d %d",&x2,&y2);
      int b[x2][y2];
      for(i=0;i<x2;i++)
      {
             for(j=0;j<y2;j++)
             {
                   if(j == 0) scanf("%d",&b[i][j]);
                   else       scanf(" %d",&b[i][j]);
             }
      }
      int t;
      for(i=0;i<x1;i++) 
      {
             for(j=0;j<y2;j++)
             {
                   t = 0;
                   for(k=0;k<y1;k++)
                          t += (a[i][k])*(b[k][j]);
                          if(j != y2-1) printf("%d ",t);
                          else        printf("%d\n",t);
             } 
      }
}  
      