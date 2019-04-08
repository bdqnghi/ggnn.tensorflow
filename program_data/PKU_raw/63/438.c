main()
{
      int x1,x2,y1,y2;
      int a[100][100]={0},b[100][100]={0},c[100][100]={0};
      int j,k,i;
      scanf("%d",&x1);
      scanf("%d",&y1);
      for(i=0;i<x1;i++)
      {
                      for(k=0;k<y1;k++)
                      {
                                       scanf("%d",&a[i][k]);
                      }
      }
      
      
      scanf("%d",&x2);
      scanf("%d",&y2);
      for(i=0;i<x2;i++)
      {
                      for(k=0;k<y2;k++)
                      {
                                       scanf("%d",&b[i][k]);
                      }
      }
      
      for(i=0;i<x1;i++)
      {
                       for(k=0;k<y2;k++)
                       {
                                       for(j=0;j<y1;j++)
                                       c[i][k]=a[i][j]*b[j][k]+c[i][k];
                                       if(k==0)
                                       printf("%d",c[i][k]);
                                       else
                                       printf(" %d",c[i][k]);
                       }
                       printf("\n");
      }
} 
