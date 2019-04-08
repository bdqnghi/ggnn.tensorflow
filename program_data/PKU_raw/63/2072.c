main()
{
      int x1,y1;
      int i=0,j=0;
      scanf("%d %d",&x1,&y1);
      int a[x1][y1];
      while(i<x1){
                  while(j<y1){
                              scanf("%d",&a[i][j]);
                              j=j+1;
                              }
                  j=0;
                  i=i+1;
                  }
      int x2,y2;
      i=0,j=0;
      scanf("%d %d",&x2,&y2);
      int b[x2][y2];
      while(i<x2){
                  while(j<y2){
                              scanf("%d",&b[i][j]);
                              j=j+1;
                              }
                  j=0;
                  i=i+1;
                  }
      int c[x1][y2];
      int m=0,n=0,sum=0;
      int k=0;
      while(m<x1){
                  while(n<y2){
                              while(k<y1){
                                          sum=sum+a[m][k]*b[k][n];
                                          k=k+1;
                                          }
                              c[m][n]=sum;
                              sum=0;
                              n=n+1;
                              k=0;
                              }
                  n=0;
                  m=m+1;
                  }
      m=0,n=0;
      while(m<x1){
                  while(n<y2){
                              if(n==(y2-1))
                                 printf("%d\n",c[m][n]);
                              else
                                 printf("%d ",c[m][n]);
                              n=n+1;
                              }
                  n=0;
                  m=m+1;
                  }
}
