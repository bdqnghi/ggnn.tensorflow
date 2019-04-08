void main()
{
	int a,b,c,m,n,i;
	scanf("%d",&n);
	i=3;
	scanf("%d",&a);
	scanf("%d",&b);
	if(a<b)
	{	m=a;
		a=b;
		b=m;
	}
	while(i<=n)
	{
		scanf("%d",&c);
		if(c>b)
		{
			m=b;
			b=c;
			c=m;
		}
		if(b>a)
		{
			m=a;
			a=b;
			b=m;
		}
		i=i+1;
	}
	printf("%d\n%d",a,b);
}

