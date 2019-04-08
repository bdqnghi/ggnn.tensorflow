int main(){
     int A[5][12][12],i,j,k,m,n;
     for(i=0;i<5;i++)
    {
        for(j=0;j<11;j++)
           {
              for(k=0;k<11;k++)
               {
                    A[i][j][k]=0;
                }
            }
      }
    scanf("%d%d",&n,&m);
    A[0][6][6]=n;
    for(i=0;i<m;i++)
   {
       for(j=1;j<10;j++)
          {
                for(k=1;k<10;k++)
                {
                        A[i+1][j][k]+=A[i][j][k]*2;
                        A[i+1][j+1][k]+=A[i][j][k];
                        A[i+1][j-1][k]+=A[i][j][k];
                        A[i+1][j][k+1]+=A[i][j][k];
                        A[i+1][j][k-1]+=A[i][j][k];
                        A[i+1][j+1][k+1]+=A[i][j][k];
                        A[i+1][j-1][k+1]+=A[i][j][k];
                        A[i+1][j+1][k-1]+=A[i][j][k];
                        A[i+1][j-1][k-1]+=A[i][j][k];
                                           
               }
           }
     }
       for(i=2;i<11;i++)
     {
            for(j=2;j<10;j++)
           {
               printf("%d ",A[m][i][j]);
           }
           printf("%d",A[m][i][10]);
           printf("\n");
     }
     return 0;
}
