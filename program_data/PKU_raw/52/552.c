int main(){
int n,m,i,a[100],b[100],*p;
p=b;
scanf("%d %d",&n,&m);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++){
if(i<n-m) *(p+i+m)=a[i];
else *(p-n+i+m)=a[i];}
for(i=0;i<n-1;i++)
printf("%d ",b[i]);
printf("%d",b[n-1]);
return 0;}
