
main()
{
      int a[10][10],b[10][10];
      int m,n;
      scanf("%d %d",&m,&n);
      for(int j=1;j<=9;j++)
              {
                      for(int k=1;k<=9;k++)
                      {
                              a[j][k]=0;
                              b[j][k]=0;
                      }
              }
      a[5][5]=m;
      b[5][5]=m;
      for(int i=1;i<=n;i++)
      {
              for(int j=2;j<=8;j++)
              {
                      for(int k=2;k<=8;k++)
                      {
                              b[j+1][k+1]= b[j+1][k+1]+a[j][k];
                              b[j][k+1]= b[j][k+1]+a[j][k];
                              b[j+1][k]= b[j+1][k]+a[j][k];
                              b[j][k]= b[j][k]+a[j][k];
                              b[j-1][k+1]= b[j-1][k+1]+a[j][k];
                              b[j-1][k]= b[j-1][k]+a[j][k];
                              b[j+1][k-1]= b[j+1][k-1]+a[j][k];
                              b[j][k-1]= b[j][k-1]+a[j][k];
                              b[j-1][k-1]= b[j-1][k-1]+a[j][k];
                      }
              }
              for(int j=1;j<=9;j++)
              {
                      for(int k=1;k<=9;k++)
                      {
                              a[j][k]=b[j][k];
                      }
              }
      }
      for(int j=1;j<=9;j++)
              {
                      for(int k=1;k<=8;k++)
                      {
                              printf("%d ",a[j][k]);
                      }
                      printf("%d\n",a[j][9]);
              }
}