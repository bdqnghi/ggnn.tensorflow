int main()
{
	int i,n,a[1000];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int k=a[0],b=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>k)
		{
			k=a[i];
		}
	}
	for(i=0;i<n;i++)
	{
		if(a[i]>b&&a[i]!=k)
		{
			b=a[i];
		}
	}
	printf("%d\n%d\n",k,b);
	return 0;
}
