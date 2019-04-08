int main(){
  int n,i,j,k,l,p,x=1;
  double m;
  int a[50000],b[50000];
  scanf("%d",&n);
  for(i=0;i<n;i++){
   scanf("%d%d",&a[i],&b[i]);}
  for(j=0,k=10000,l=1;j<n;j++){
   if(k>=a[j]){
     k=a[j];}
   if(l<=b[j]){
     l=b[j];}
  }
  for(m=k+0.1;m<l;m++){
   for(i=0,p=0;i<n;i++){
    if(m>a[i]&&m<b[i]){
     p=1;
     break;}
   }
   if(p==0){
    printf("no\n");
    x=0;}
  }
  if(x==1){
   printf("%d %d",k,l);}
  return 0;
}