int main()
{
int n;
scanf("%d",&n);
int a[n],b[n],m=0;
for (int i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    b[i]=1;
    }
for (int i=n-1;i>=0;i--)
    for (int j=i-1;j>=0;j--)
        if (a[j]>=a[i]&& b[j]<b[i]+1) b[j]=b[i]+1;
for (int i=0;i<n;i++)
    if (m<b[i]) m=b[i];
printf("%d",m);
}
