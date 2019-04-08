int main()
{
    int x,y,m,n,i,j,k,a[102][102],b[102][102],c[102][102]={0};
    scanf("%d%d",&x,&y);
    for(i=0;i<x;i++)
         {
             for(j=0;j<y;j++)
                 {
                     scanf("%d",&a[i][j]);
                 }
         }
      scanf("%d%d",&m,&n);
       for(i=0;i<m;i++)
         {
             for(j=0;j<n;j++)
                 {
                     scanf("%d",&b[i][j]);
                 }
         }
        for(i=0;i<x;i++)
              {
                  for(k=0;k<n-1;k++)
                      {
                       for(j=0;j<y;j++)
                           {
                               c[i][k]+=a[i][j]*b[j][k];
                           } 
                           printf("%d ",c[i][k]);
                        }
                      for(j=0;j<y;j++) 
                       {
                        c[i][n-1]+=a[i][j]*b[j][n-1];
                        }    
                      printf("%d\n",c[i][n-1]); 
              }
                      
}


