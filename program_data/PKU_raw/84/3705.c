int main()
{
	int a[100];
	int n,i,b,c,d;
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
	{
		scanf("%d",&a[i]);
	}
    for(i=0,b=0;i<=n-1;i++)
	{
		if (b<a[i])
	    b=a[i];
	}

	for(i=0;i<=n-1;i++)
	{
		if (a[i]==b)
			break;
	}
	c=i;
	for(i=0,d=0;i<=n-1;i++)
	{
		if (i!=c&&d<a[i])
		d=a[i];
	}
	printf("%d\n%d",b,d);
}
