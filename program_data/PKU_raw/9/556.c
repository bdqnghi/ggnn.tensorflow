int main()
{
int n,i,j,a[100],b[100],c[100];
char d[100][100];
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%s %d",d[i],&a[i]);
for(j=0;j<=n;j++)
if(a[j]>=60)
b[j]=a[j]*1000-j;
else b[j]=1000-j;
for(j=0;j<=n;j++)
c[j]=0;
for(i=0;i<n;i++)
for(j=0;j<n;j++)
if(b[j]>=b[i])
c[i]++;
for(i=0;i<n;i++)
for(j=0;j<n;j++)
if(c[j]==i+1)
printf("%s\n",d[j]);
}