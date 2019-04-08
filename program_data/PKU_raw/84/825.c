int main()
{
	int n,a,b,c,d;
	scanf("%d",&n);
	scanf("%d",&a);
	scanf("%d",&b);
	n=n-2;
	if(b>a)
	{
		c=b;
		b=a;
		a=c;
	}
	do
	{
		n--;
		scanf("%d",&d);
		if(d>b)
		{
			c=d;
			d=b;
			b=c;	
		}
		if(b>a)
		{
			c=b;
			b=a;
			a=c;	
		}
	}
	while(n!=0);
	printf("%d\n%d",a,b);
	return 0;
}