int main()
{
int a[200],m,n,i;
scanf("%d%d",&n,&m);
for(i=1;i<=n;i++)
{
scanf("%d",&a[i]);
}
for(i=1;i<=m;i++)
{
a[n+i]=a[n-m+i];
}
for(i=1;i<=n-m;i++)
{
a[n-i+1]=a[n-m-i+1];
}
for(i=1;i<=m;i++)
{
a[i]=a[n+i];
}
printf("%d",a[1]);
for(i=2;i<=n;i++)
{
printf(" %d",a[i]);
}
return 0;
}
