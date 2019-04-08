int main(){
  int min,max,i,m,e,r,k,n,y,a[10000],b[10000];
  min=10000;
  max=0;
  y=0;
  m=0;
  scanf("%d",&n);
  for(i=0;i<n;i++){
     scanf("%d%d",&a[i],&b[i]);
     
  }
  for(i=0;i<n;i++){
     if(a[i]<min){
       min=a[i];
     }  
     if(b[i]>max){
       max=b[i];
     }
  }
  for(k=1;k<=n;k++){
   for(i=0;i<n-k;i++){
     if(a[i]>a[i+1]){
       e=a[i];
       a[i]=a[i+1];
       a[i+1]=e;
       r=b[i];
       b[i]=b[i+1];
       b[i+1]=r;
     }
   
   }
  
  }
  for(i=0;i<n-1;i++){
    if(b[i]>m){m=b[i];}
    if(a[i+1]>m){
      printf("no");
      y=1;
      break;
    }
  }
  if(y==0){
    printf("%d %d",min,max);
  }
  
  
  
  
  
  

  return 0;




}
