int main()
{
	int m,n,i;
	int a[128];
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		printf("%d ",a[(i+n-m)%n]);
	}
	printf("%d",a[n-m-1]);
	return 0;
}
	
