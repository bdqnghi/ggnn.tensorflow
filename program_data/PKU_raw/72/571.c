  int main(){
  int m,n,i,j;
  scanf("%d%d",&m,&n);
  int a[m+2][n+2];
  for(j=0;j<=n+1;j++){
     a[0][j]=0;
     a[m+1][j]=0;
     }
  for(i=1;i<=m;i++){
     a[i][0]=0;
     a[i][n+1]=0;
     }                      
  for(i=1;i<m+1;i++){
     for(j=1;j<n+1;j++){
        scanf("%d",&a[i][j]);
        }
     }
  for(i=1;i<m+1;i++){
     for(j=1;j<n+1;j++){
        if(a[i][j]>=a[i-1][j]&&a[i][j]>=a[i+1][j]&&a[i][j]>=a[i][j-1]&&a[i][j]>=a[i][j+1]){
          printf("%d %d\n",i-1,j-1);
          }
          }
          }
  scanf("%d",&n);
  return 0;
}
