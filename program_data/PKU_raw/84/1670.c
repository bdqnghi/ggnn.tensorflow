int main()
{
	int i=3,n,a,b,c;
	scanf("%d%d%d",&n,&a,&b);
	while(i<=n)
	{
		scanf("%d",&c);
		if(a>=b&&c>=b)
			b=c;
		else
		{
			if(b>=a&&c>=a)
				a=c;
		}
		i++;
	}
	if (a<b)
	{
	 c=a;
	 a=b;
	 b=c;
	}
	printf("%d\n%d",a,b);
	return 0;
}