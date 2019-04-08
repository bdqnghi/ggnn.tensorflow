int main()
{
	int a[200];
	int n,m,i;
	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-m;i++)
	{
		a[n+i]=a[i];
	}
	for(i=0;i<n-1;i++)
	{
		printf("%d ",a[n-m+i]);
	}
	printf("%d",a[n-m+i]);
}