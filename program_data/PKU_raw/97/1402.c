int main()
{
	int x,a,b,c,d,e,f,n;
	a=0;
	b=0;
	c=0;
	d=0;
	e=0;
	f=0;
	scanf("%d",&x);
    if(x%10<5)
	{
		f=x%10;
	}
	else
	{
		e=1;
		f=x%10-5;
	}
	if(x>100)
	{
		a=x/100;
	}
	if(x>10)
	{
		n=(x/10)%10;
		if(n-5>=0)
		{
			b=1;
			if((n-5)%2==0)
			{
				c=(n-5)/2;
			}
			else
			{
				d=1;
				c=(n-5-d)/2;
			}
		}
		else if(n%2==0)
		{
			c=n/2;
		}
		else
		{
			d=1;
			c=(n-d)/2;
		}
	}
	printf("%d\n%d\n%d\n%d\n%d\n%d\n",a,b,c,d,e,f);

	return 0;
}