void main()
{
	int n,m,a[200],*p;
	scanf("%d %d",&n,&m);
	for(p=a;p<a+n;p++)
	{
		scanf("%d",p);
	}
	p=a;
	for(p=a;p<&a[n-m];p++)
	{
		*(p+n)=*p;
	}
	for(p=a;p<&a[n];p++)
	{
		*p=*(n-m+p);
	}
	for(p=a;p<&a[n];p++)
	{
		if(p==a)
		{
			printf("%d",*p);
		}
		else
		{
			printf(" %d",*p);
		}
	}
}