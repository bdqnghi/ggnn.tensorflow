main()
{
      int i,j,k=0,a[5][5];
      int b[5][5]={0},c[5][5]={0},d[5][5];
      for(i=0;i<5;i++)
      {
                      scanf("%d %d %d %d %d",&a[i][0],&a[i][1],&a[i][2],&a[i][3],&a[i][4]);
      }
      for(i=0;i<5;i++)
      {
                      for(j=0;j<5;j++)
                      {
                                      if(a[i][j]>=a[i][0]&&a[i][j]>=a[i][1]&&a[i][j]>=a[i][2]&&a[i][j]>=a[i][3]&&a[i][j]>=a[i][4])
                                      b[i][j]=1;
                      }
      }
      for(i=0;i<5;i++)
      {
                      for(j=0;j<5;j++)
                      {
                                      if(a[i][j]<=a[0][j]&&a[i][j]<=a[1][j]&&a[i][j]<=a[2][j]&&a[i][j]<=a[3][j]&&a[i][j]<=a[4][j])
                                      c[i][j]=1;
                      }
      }
      for(i=0;i<5;i++)
      {
                      for(j=0;j<5;j++)
                      {
                                      d[i][j]=b[i][j]*c[i][j];
                                      if(d[i][j]==1)
                                      printf("%d %d %d\n",i+1,j+1,a[i][j]);
                      }
      }
      for(i=0;i<5;i++)
      {
                      for(j=0;j<5;j++)
                      {
                                      d[i][j]=b[i][j]*c[i][j];
                                      if(d[i][j]==0)
                                      k=k+1;
                      }
      }
      if(k==25)
      printf("not found");
      
}
