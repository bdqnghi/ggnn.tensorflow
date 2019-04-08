main()
{
      int C(int x,int y);
      int x1,x2,y2,y1;
      int a[100][100]={0},b[100][100]={0},c[100][100]={0};
      scanf("%d %d",&x1,&y1);
      for(int j=0;j<x1;j++)
      {
              for(int k=0;k<y1;k++)
              {
                      if(k==0)
                      scanf("%d",&a[j][k]);
                      else scanf(" %d",&a[j][k]);
              }
      }
      scanf("%d %d",&x2,&y2);
      for(int j=0;j<x2;j++)
      {
              for(int k=0;k<y2;k++)
              {
                      if(k==0)
                      scanf("%d",&b[j][k]);
                      else scanf(" %d",&b[j][k]);
              } 
      }
      for(int j=0;j<x1;j++)
      {
              if(j!=0)   printf("\n");
              for(int k=0;k<y2;k++)
              {
                      c[j][k]=0;
                      for(int i=0;i<y1;i++)
                      c[j][k]=c[j][k]+a[j][i]*b[i][k];
                      if(k==0)
                      printf("%d",c[j][k]);
                      else 
                      {
                          
                           printf(" %d",c[j][k]);
                      }
              } 
      }
      
     
}