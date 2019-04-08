   int main(){
   int n,i,j,k;
   k=0;
   scanf("%d",&n);
   int a[n],b[n];
   for(i=0;i<n;i++){
      scanf("%d",&a[i]);
      }
   for(j=0;j<n-1;j++){
      if(a[j]!=100){
      for(i=j+1;i<n;i++){
          if(a[i]==a[j]){
            a[i]=100;
            }
            }
            }
            }
   printf("%d",a[0]);
   for(i=1;i<n;i++){
      if(a[i]!=100){
        printf(" %d",a[i]);
        }
        }
   scanf("%d",&n);
   return 0;
}
      
    
