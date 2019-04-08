int main()
{
int n,i,j,m,a[200];
scanf("%d%d",&n,&m);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n-m;i++)
{
a[100+i]=a[i];
}
for(j=0,i=n-m;i<n;i++,j++)
{
a[j]=a[i];
}
for(j=m,i=100;i<100+n-m;j++,i++)
{
a[j]=a[i];
}
for(i=0;i<n-1;i++)
{
printf("%d ",a[i]);
}
printf("%d\n",a[n-1]);
return 0;
}