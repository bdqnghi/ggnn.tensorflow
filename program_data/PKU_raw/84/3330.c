int main()
{
int n,m,i,t,a[100];
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++){
for(t=i+1;t<n;t++){
if(a[i]<a[t]){
m=a[i];
a[i]=a[t];
a[t]=m;}
}}
printf("%d\n",a[0]);
printf("%d\n",a[1]);
return 0;
}
