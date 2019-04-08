int main()
{
int num=0,k=0,n,i,j,a[50],max=0,f[50]={0};
scanf("%d",&n);
for(i=1;i<=n;i++)
{
scanf("%d",&a[i]);
}
for(i=1;i<=n;i++)
{ 
for(j=1;j<=i;j++)
{
if(a[i]<=a[j]&&f[i]<f[j]) 
{
f[i]=f[j];
}
}
f[i]++;
if(max<f[i]) 
{
max=f[i];
}
}
printf("%d",max);
return 0;
}