int main()
{
	int n,m,i;
	int a[101];
	scanf("%d%d",&n,&m);
	for(i=m;i<n+m;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<m;i++)
	{
		a[i]=a[n++];
	}
	for(i=n;i<n+m;i++)
	{
		a[i]=0;
	}
	for(i=0;i<n-m;i++)
	{
		printf("%d",a[i]);
		if(i!=n-m-1)
		{
			printf(" ");
		}
	}
	return 0;
}