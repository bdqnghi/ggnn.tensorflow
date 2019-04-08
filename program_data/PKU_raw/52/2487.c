int main(){
   int n,i,m;
   scanf("%d %d\n",&n,&m);
   int *sz=(int*)malloc(sizeof(int)*n);
     for(i=0;i<n-1;i++){
       scanf("%d",&sz[i]);
     }
       scanf("%d",&sz[n-1]);
       m=m%n;
   for(i=n-m;i<n;i++){
     printf("%d ",sz[i]);
   }
    for(i=0;i<n-m-1;i++){
       printf("%d ",sz[i]);
    }
      printf("%d",sz[n-m-1]);
  free(sz);
  return 0;
}
