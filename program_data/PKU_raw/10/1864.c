void main()
{
int a[30],b[30],i,j,k,n,m=1;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
scanf("%d",&a[i]);
b[i]=1;
}
for(i=n-1;i>=1;i--)
{
for(j=i+1;j<=n;j++)
{
if(a[i]>=a[j]&&b[i]<b[j]+1)
b[i]=b[j]+1;
}
if(b[i]>m)
m=b[i];
}
printf("%d",m);
}

