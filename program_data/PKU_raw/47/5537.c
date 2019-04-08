int main()
{
    int a[200];
	int n,i;
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
	{
		scanf("%d",&a[i]);
	}
    for(i=0;i<=n-1;i++)
	{
		a[i+n]=a[i];
	}
	for(i=0;i<=n-1;i++)
	{
		a[i]=a[2*n-1-i];
	}
	for(i=0;i<=n-2;i++)
	{
		printf("%d ",a[i]);
	}
	printf("%d",a[n-1]);
}