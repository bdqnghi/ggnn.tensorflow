int main()
{
int a[50000],b[50000];
int n,nummax,nummin,max,min;
scanf("%d",&n);
for(int i=0;i<n;i++){
scanf("%d %d",&a[i],&b[i]);
}
max=a[0];
min=a[0];
nummax=50000;
nummin=50000;
for(int k=0;k<n;k++){
 for(int j=0;j<n;j++){
  if(a[j]<=a[k]&&a[k]<=b[j]&&b[j]<=b[k]){
  a[k]=a[j];
  b[j]=b[k];
  }
  if(a[j]<=a[k]&&a[k]<=b[k]&&b[k]<=b[j]){
  a[k]=a[j];
  b[k]=b[j];
  }
  
 }
}
for(int u=0;u<n;u++){
   if(max<=b[u]){
max=b[u];
 nummax=u;}
   if(min>=a[u]){
min=a[u];
nummin=u;
   }
 
}
if(b[nummin]==max&&a[nummax]==min){
printf("%d %d",min,max);
}
else{
printf("no");
}

return 0;
}
