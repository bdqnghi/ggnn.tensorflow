
main()
{
      int a[9][9];
      int b[9][9];
      int m,n,i,j,k;
      for(i=0;i<9;i++)
      {
                      for(j=0;j<9;j++)
                      {
                                      a[i][j]=0;
                                      b[i][j]=0;
                                      }
                                      }
      scanf("%d %d",&m,&n);
      a[4][4]=m;
      b[4][4]=m;
      for(k=0;k<n;k++)
      {
                      for(i=0;i<9;i++)
                      {
                                      for(j=0;j<9;j++)
                                      {
                                                      b[i][j]=a[i][j];}} 
      
      for(i=4-k;i<=4+k;i++)
      {
                      for(j=4-k;j<=4+k;j++)
                      {
                      a[i-1][j]=b[i][j]+a[i-1][j];
                      a[i-1][j-1]=b[i][j]+a[i-1][j-1];
                      a[i-1][j+1]=b[i][j]+a[i-1][j+1];
                      a[i+1][j]=b[i][j]+a[i+1][j];  
                      a[i+1][j+1]=b[i][j]+a[i+1][j+1];
                      a[i+1][j-1]=b[i][j]+a[i+1][j-1];
                      a[i][j-1]=b[i][j]+a[i][j-1];
                      a[i][j+1]=b[i][j]+a[i][j+1];
                      a[i][j]=a[i][j]+b[i][j];                
                      }
      }
      }
      for(i=0;i<9;i++)
      {
                      for(j=0;j<9;j++)
                      {
                                      if(j<8)
                                      printf("%d ",a[i][j]);
                                      if(j==8)
                                      printf("%d\n",a[i][j]);
                      }
      }
      
}                                 
                            
