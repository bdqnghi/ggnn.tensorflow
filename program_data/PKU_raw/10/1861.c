void main()
{
int n,i,j,m,a[30],b[30];
scanf("%d",&n);
m=1;
for(i=1;i<=n;i++)
{
scanf("%d",&a[i]);
b[i]=1;
}
for(i=n;i>=1;i--)
{
for(j=i+1;j<=n;j++)
{
if(a[i]>=a[j])
if(b[i]<b[j]+1)
b[i]=b[j]+1;
}
if(b[i]>m)
m=b[i];
}
printf("%d",m);
}
