void main()
{
	int m=1,n,a,b,c;
	scanf("%d",&n);
	scanf("%d%d",&b,&c);
	if(c>b)
	{
		c=c+b;b=c-b;c=c-b;
	}
	while (m<=n)
	{
		scanf("%d",&a);
		if (a>b)
		{
			a=a+b;b=a-b;a=a-b;
		}
		else if (a>c)
		{
			a=a+c;c=a-c;a=a-c;
		}
		m++;
	}
	printf("%d\n%d",b,c);
}