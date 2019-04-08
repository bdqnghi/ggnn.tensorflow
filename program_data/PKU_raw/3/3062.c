int main(){
  int n,k,i,j,s=0;
  scanf("%d%d",&n,&k);
  int a[n];
  for(i=0;i<n;i++){
      scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++){
      for(j=0;j<n;j++){
          if(i==j){
             j++;
          }
          if(a[i]+a[j]==k){
             s++;
          }
      }
   }
   if(s==0){
      printf("no");
   }else{
      printf("yes");
   }
   return 0;
}