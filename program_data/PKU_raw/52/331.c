void main()
{
	int m,n,i,a[100],*p[100];
	scanf ("%d %d",&n,&m);
	for (i=0;i<n;i++)
	{
		scanf ("%d",&a[i]);
		p[i]=&a[i];
	}
	for (i=0;i<n-m;i++)
	{
		p[i+m]=&a[i];
	}
	for (i=n-m;i<n;i++)
	{
		p[i-n+m]=&a[i];
	}
	for (i=0;i<n-1;i++)
		printf("%d ",*p[i]);
	printf("%d\n",*p[n-1]);
}
