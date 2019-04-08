void main()
{
	int a[100];
	int n,i=0;
	scanf("%d",&n);
	while(i<n)
	{
		scanf("%d",&a[i]);
		i=i+1;
	}
	i=n-1;
	while(i>0)
	{
		printf("%d ",a[i]);
		i=i-1;
	}
	printf("%d",a[0]);
}
