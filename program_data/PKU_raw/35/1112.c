int main()
{
    int sz[8][8],max[8],min[8],e=1;
    int n,m,i,j,k;
    scanf("%d,%d",&n,&m);
    for(i=0;i<n;i++){
       for(j=0;j<m;j++){
          scanf("%d",&sz[i][j]);
          }
          }
    for(k=0;k<n;k++){
       max[k]=0;
       min[k]=0;
       }
    for(i=0;i<n;i++){
       for(j=0;j<m-1;j++){
          if(sz[i][max[i]]<sz[i][j+1]){
            max[i]=j+1;
            }
            }
            }
    for(j=0;j<m;j++){
       for(i=0;i<n-1;i++){
          if(sz[min[j]][j]>sz[i+1][j]){
            min[j]=i+1;
            }
            }
            }
    for(i=0;i<n;i++){
       if(min[max[i]]==i){
         printf("%d+%d\n",i,max[i]);
         e=0;
         }
         }
    if(e==1){
      printf("No");
      }
    int t;
    scanf("%d",&t);
    return 0;
}
