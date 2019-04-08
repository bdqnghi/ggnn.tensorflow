void main()
{
	int n,a[100],i,b=0,c=0;
	scanf("%d",&n);
	for (i=0;i<=n-1;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<=n-1;i++)
	{
		if(a[i]>=b)
		{
			b=a[i];
		}
	}
	printf("%d\n",b);
	for (i=0;i<=n-1;i++)
	{
		if(a[i]==b)
		{
			b=b+1;
		}
		else if(a[i]>=c&&a[i]<b)
		{
			c=a[i];
		}
	}
	printf("%d",c);
}