int main(){
   int a[100][100],r,c,m,n;
   scanf("%d%d",&r,&c);
   for(int i=0;i<r;i++){
      for(int j=0;j<c;j++){
          scanf("%d",&a[i][j]);
      }
   }
   for(int k=0;r-k>k&&c-k>k;k++){
      for(m=k,n=k;n<c-k-1;n++){
          printf("%d\n",a[m][n]);
      }
      for(m=k;m<r-k-1;m++){
          printf("%d\n",a[m][n]);
      }
      if (m==k||n==k){
          printf("%d\n",a[m][n]);
          break;
      }
      for(n=c-k-1;n>k;n--){
          printf("%d\n",a[m][n]);
      }
      for(m=r-k-1;m>k;m--){
          printf("%d\n",a[m][n]);
      }
   }
   return 0;
}