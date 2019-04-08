int main()
{
	int n,a[101],b[101],i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
		b[i]=a[i];
	}
	for(i=1;i<=n;i++)
	{
		a[i]=b[n-i+1];
if(i!=n)
		printf("%d ",a[i]);
else printf("%d",a[i]);
	}
	return 0;
}
