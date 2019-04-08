void main()
{
	int n,a,b,c,i,t;
	scanf("%d",&n);
	scanf("%d%d",&a,&b);
	if(a<b)
	{
		t=b;
		b=a;
		a=t;
	}
	for(i=3;i<=n;i++)
	{
		scanf("%d",&c);
		if(c>a)
		{
			b=a;
			a=c;
		}
		else
		{
			if(c>b)
			{
				b=c;
			}
		}
	}
	printf("%d\n%d",a,b);
}

