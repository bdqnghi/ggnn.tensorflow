int main(){

int a[100]={0},b[100]={0};
int n,m,i,k;
scanf("%d %d",&n,&m);
for(i=0;i<n;i++)
   scanf("%d",&a[i]);
for(i=0;i<n-m;i++)
   b[i]=a[i];
  k=0;
for(i=n-m;i<n;i++,k++)
  a[k]=a[i];
  k=0;
for(i=m;i<n;i++,k++)
  a[i]=b[k];
  for(i=0;i<n-1;i++)
   printf("%d ",a[i]);
  printf("%d",a[n-1]);
   return 0;





}