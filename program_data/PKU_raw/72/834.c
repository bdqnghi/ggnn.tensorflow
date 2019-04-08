int main() {
   int m,n,i,j;
   int sz[20][20];
   scanf("%d %d",&m,&n);
   for(i=0;i<m;i++) {
         for(j=0;j<n;j++) {
              scanf("%d",&(sz[i][j]));
         }
   }                                             
   for(i=0;i<m;i++) {
       for(j=0;j<n;j++) {
            if(i>0&&i<m-1&&j>0&&j<n-1&&sz[i][j]>=sz[i][j-1]&&sz[i][j]>=sz[i][j+1]&&sz[i][j]>=sz[i+1][j]&&sz[i][j]>=sz[i-1][j]) {
                    printf("%d %d\n",i,j);                                  
                               }
            if(i==0&&j==0&&sz[0][0]>=sz[0][1]&&sz[0][0]>=sz[1][0]) {
                    printf("%d %d\n",i,j);
            }
            if(i==0&&j==n-1&&sz[0][n-1]>=sz[0][n-2]&&sz[0][n-1]>=sz[1][n-1]) {
                    printf("%d %d\n",i,j);                                
            }
            if(i==m-1&&j==0&&sz[m-1][0]>=sz[m-1][1]&&sz[m-1][0]>=sz[m-2][0]) {
                    printf("%d %d\n",i,j);  
            }
            if(i==m-1&&j==n-1&&sz[m-1][n-1]>=sz[m-1][n-2]&&sz[m-1][n-1]>=sz[m-2][n-1]) {
                 printf("%d %d\n",i,j);  
            }                                                                  
            if((i==0&&j>0&&j<n-1&&sz[i][j]>=sz[i+1][j]&&sz[i][j]>=sz[i][j-1]&&sz[i][j]>=sz[i][j+1])||(i==m-1&&j>0&&j<n-1&&sz[i][j]>=sz[i-1][j]&&sz[i][j]>=sz[i][j+1]&&sz[i][j]>=sz[i][j-1])||(j==0&&i>0&&i<m-1&&sz[i][j]>=sz[i][j+1]&&sz[i][j]>=sz[i-1][j]&&sz[i][j]>=sz[i+1][j])||(j==n-1&&i>0&&i<m-1&&sz[i][j]>=sz[i][j-1]&&sz[i][j]>=sz[i-1][j]&&sz[i][j]>=sz[i+1][j])) {
                 printf("%d %d\n",i,j);
             }
       }
   }
return 0;
}



            

  

   
