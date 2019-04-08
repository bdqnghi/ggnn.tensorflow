int main()
{
	int n,m,i,a[101],j;
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(j=1;j<=m;j++)
	{
		for(i=n-1;i>=0;i--)
		{
			a[i+1]=a[i];
		}
		a[0]=a[n];
	}
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
		if(i<n-1)
			printf(" ");
	}
	
	return 0;
}