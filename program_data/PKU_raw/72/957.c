int main(){
  int A[100][100],m,n;
  scanf("%d%d",&m,&n);
  for(int i=0;i<m+2;i++){
      for(int j=0;j<n+2;j++){
          if(i==0||j==0||i==m+1||j==n+1){A[i][j]=0;}  
          else{scanf("%d",&(A[i][j])); }
           
              }    
          }
  for(int i=1;i<m+1;i++){
      for(int j=1;j<n+1;j++){
         if(A[i][j]>=A[i-1][j]&&A[i][j]>=A[i][j-1]&&A[i][j]>=A[i+1][j]&&A[i][j]>=A[i][j+1])
            { printf("%d ",i-1);
              printf("%d\n",j-1);                                                                            
                 }
                }
          }
          
return 0;
}

