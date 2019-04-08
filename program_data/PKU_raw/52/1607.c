move (int a[],int n,int m)
{
	int *p,i,q = 0;
	p = a + n - 1 ;
	for (; q < m;)
	{
		for(;p > a;p--)
		{
			i = *p;
			*p = *(p - 1);
			*(p - 1) = i;
		}
		q++;
		p = a + n - 1;
	}
}
main()
{
	int n, m, *p;
	int b[10000];
	scanf("%d%d",&n,&m);
	for(p = b;p < b + n;p++)
	{
		scanf("%d",p);
	}
	move (b,n,m);
	for (p = b;p < b+n-1;p++)
	{
		printf("%d ",*p);
	}
	printf("%d",*p);
}

