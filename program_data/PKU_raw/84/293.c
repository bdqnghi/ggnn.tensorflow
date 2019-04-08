void main()
{
	int n,a,b,c,d,i,r;
	scanf("%d",&n);
	scanf("%d",&a);
	b=a;
	c=a;
	for(i=2;i<=n;i++)
	{
		scanf("%d",&d);
		if(d>b)
		{
			r=b;
			b=d;
			if(r>c)
				c=r;
		}
		else if(d>c)
			c=d;
	}
	printf("%d\n%d\n",b,c);
}


