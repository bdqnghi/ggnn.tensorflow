int main()
{
	int n,a,b,c,d,e;
	scanf("%d\n",&n);
	scanf("%d\n",&a);
	scanf("%d\n",&b);
	if(a>=b)
	{
		c=a;
		d=b;
	}
	else
	{
		c=b;
		d=a;
	}
	for(int i=0;i<n-2;i++)
	{
		scanf("%d\n",&e);
		if(e>=c)
		{
			d=c;
			c=e;}
		else if(e<c&&e>=d)
			d=e;
	}
	printf("%d\n%d\n",c,d);
	return 0;
}
	