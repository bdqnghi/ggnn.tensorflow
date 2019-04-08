int main()
{
int n,m,i,j;
int a[1000]={0};
scanf("%d%d",&n,&m);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=n+m-1;i>=m;i--)
a[i]=a[i-m];
for(i=0;i<=m-1;i++)
a[i]=a[i+n];
for(i=0;i<n;i++)
{printf("%d",a[i]);
if(i!=n-1) printf(" ");
}
return 0;
}
