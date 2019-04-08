main()
{
      int a[11][11],b[11][11];
      int i,j,k,l,m,n;
      for(i=0;i<11;i++)
      for(j=0;j<11;j++)
      {
                       a[i][j]=0;
                       b[i][j]=0;
                       }
      scanf("%d %d",&m,&n);
      a[5][5]=m;
      for(k=0;k<n;k++)
      {
                      for(i=1;i<10;i++)
                      {
                                       for(j=1;j<10;j++)
                                       b[i][j]=2*a[i][j]+a[i-1][j-1]+a[i-1][j]+a[i-1][j+1]+a[i][j-1]+a[i][j+1]+a[i+1][j+1]+a[i+1][j-1]+a[i+1][j];
                                       }
                      for(i=1;i<10;i++)
                      {
                                       for(j=1;j<10;j++)
                                       a[i][j]=b[i][j];
                                       }
                                       }
      for(i=1;i<10;i++)
      {
           for(j=1;j<10;j++)
           {
                            if(j==9)
                            printf("%d\n",a[i][9]);
                            else
                            printf("%d ",a[i][j]);
                            }
                            }
                            getchar();
                            getchar();
}
                                       