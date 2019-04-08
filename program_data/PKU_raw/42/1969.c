int main()
{
int n,k,m;
scanf("%d",&n);
int a[n];
m=n;
for (int i=0;i<n;i++)
scanf("%d",&a[i]);
scanf("%d",&k);
for (int i=0;i<n;i++)
if (a[i]==k) {for (int j=i;j<n-1;j++) a[j]=a[j+1];i--;n--;}
for (int i=0;i<n-1;i++)
printf("%d ",a[i]);
printf("%d",a[n-1]);
}