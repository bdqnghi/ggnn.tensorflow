void main()
{
	int n,b,c,i=1;
	scanf("%d",&n);
	b=0;
	c=0;
	do
	{
		int a;
		scanf("%d",&a);
		if(a>b)
		{
			c=b;
			b=a;
		}
		else
			if(a>c)
			{
				c=a;
				b=b;
			}
			else
			{
				c=c;
				b=b;
			}
		i=i+1;
	}
	while(i<=n);
	printf("%d\n%d",b,c);
}

