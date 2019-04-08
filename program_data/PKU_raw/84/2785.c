void main()
{
int a[100],n,i,j,t;
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);

for(j=0;j<n-1;j++)
for(i=0;i<n-1-j;i++)
if(a[i]<a[i+1])
{
t=a[i];
a[i]=a[i+1];
a[i+1]=t;
}
printf("%d\n%d\n",a[0],a[1]);
}

