main()
{
      int a[5][11][11];
      int i,j,k,day;
      for(i=0;i<=4;i++)
      {
          for (j=0;j<=10;j++)
          {
              for (k=0;k<=10;k++)
              {
                  a[i][j][k]=0;
              }
          }
      }
      scanf("%d %d",&a[0][5][5],&day);
      for (i=1;i<=day;i++)
      {
          for (j=1;j<=9;j++)
          {
              for (k=1;k<=9;k++)
              {
                  a[i][j][k]=a[i-1][j][k]*2+a[i-1][j-1][k-1]+a[i-1][j-1][k]+a[i-1][j-1][k+1]+a[i-1][j+1][k-1]+a[i-1][j+1][k]+a[i-1][j+1][k+1]+a[i-1][j][k-1]+a[i-1][j][k+1];
              }
          }
      }
      for (j=1;j<=9;j++)
      {
          for (k=1;k<=9;k++)
          {
              if (k==1) printf("%d",a[day][j][k]);
              else printf(" %d",a[day][j][k]);
          }
          printf("\n");
      }
      getchar();
      getchar();
}