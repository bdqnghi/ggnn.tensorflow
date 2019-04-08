void main()
{
	int a,i,n,k,b,c;
	scanf("%d%d",&n,&k);
	a=1;
	b=1;
	c=a*n+k;
	if(n>2)
	{
	for(i=1;i<=n;i++)
	{
		if(c%(n-1)==0)
		{
			a=c/(n-1);
			c=a*n+k;
		}
		else
		{
			a=b+1;
			b=a;
			i=1;
			c=a*n+k;
		}
	}
	printf("%d",c);
	}
	else printf("7");
}

