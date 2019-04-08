void main()
{
	int m,n,*p,a[1000],i,j;
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	p=&a[0];
	
	for(i=n;i>=0;i--)
	{
		a[m+i]=*(p+i);
	}

	p=&a[n];
	for(i=0;i<m;i++)
	{
		a[i]=*(p+i);
	}
	for(i=0;i<n-1;i++)
	{
		printf("%d ",a[i]);
	}
	printf("%d",a[n-1]);
}
