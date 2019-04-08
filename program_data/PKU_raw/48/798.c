main()
{
     int i,j,k,n,m,d;
     int a[11][11]={0},b[11][11]={0};
     scanf("%d %d",&m,&d);
     a[5][5]=m;
     for(k=1;k<=d;k++)
     {
     for(i=1;i<10;i++)
     for(j=1;j<10;j++)
     {
                      b[i][j]=2*a[i][j]+a[i-1][j]+a[i-1][j-1]+a[i-1][j+1]+a[i][j-1]+a[i][j+1]+a[i+1][j-1]+a[i+1][j]+a[i+1][j+1];
                     }             
                      for(i=0;i<11;i++)
                      for(j=0;j<11;j++)
                      a[i][j]=b[i][j];
                     }
                     for(i=1;i<10;i++)
                     {
                      for(j=1;j<10;j++)
                      {
                                      if(j==1)
                                      printf("%d",a[i][j]);
                                      else
                      printf(" %d",a[i][j]);
                      if(j==9)
                      printf("\n");
                      }
                      }
     
}
