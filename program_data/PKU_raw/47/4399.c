void main()
{
	int n,i,j,a[100];
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
	{
		scanf("%d",&a[i]);
	}
	for(j=n-1;j>=1;j=j-1)
	{
		printf("%d ",a[j]);
	}
	printf("%d",a[0]);
}