main()
{
      int m,n,a[11][11],b[11][11],i,j,k;
      scanf("%d %d",&m,&n);
      for(i=0;i<11;i++)
      {
             for(j=0;j<11;j++)
             {    
                  a[i][j]=0;
                  b[i][j]=0;
             }
      }
      b[5][5]=m;
      for(k=1;k<=n;k++)
      {
          for(i=5-n;i<=5+n;i++)
          {
                for(j=5-n;j<=5+n;j++)
                {
                     a[i][j]=2*b[i][j]+b[i+1][j+1]+b[i][j+1]+b[i+1][j]+b[i-1][j-1]+b[i-1][j+1]+b[i+1][j-1]+b[i-1][j]+b[i][j-1];
                }
          }
          for(i=5-n;i<=5+n;i++)
          {
                for(j=5-n;j<=5+n;j++)
                {
                     b[i][j]=a[i][j];
                }
          }
          
      }
      for(i=1;i<10;i++)
      {
             for(j=1;j<10;j++)
             { 
                  if(j==1)   
                  printf("%d",a[i][j]);
                  else if(j!=1&&j!=9)
                  printf(" %d",a[i][j]);
                  else if(j==9)
                  printf(" %d\n",a[i][j]);
             }
      }
     
}
                       