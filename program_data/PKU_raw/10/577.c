int main()
{
int n,i,j,k;
int a[25],b[25];
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
b[n-1]=1;
for(i=1;i<n;i++)
b[i]=1;
for(i=n-2;i>=0;i--)
for(j=n-1;j>=i+1;j--)
if(a[i]>=a[j]&&b[j]+1>=b[i])
b[i]=b[j]+1;
k=b[0];
for(i=1;i<n;i++)
if(b[i]>k)
k=b[i];
printf("%d",k);
}