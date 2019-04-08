void main()
{
	int x,a,b,c,d,e;
	scanf("%d",&x);
	if(x<10)
		printf("%d\n",x);
	else if(x<100)
		printf("%d%d\n",x%10,x/10);
	else if(x<1000)
	{
		a=x%10;
		b=(x/10)%10;
		c=x/100;
		printf("%d%d%d\n",a,b,c);
	}
	else if(x<10000)
	{
		a=x%10;
		b=(x/10)%10;
		c=(x/100)%10;
		d=x/1000;
		printf("%d%d%d%d",a,b,c,d);
	}
	else
	{
		a=x%10;
		b=(x/10)%10;
		c=(x/100)%10;
		d=(x/1000)%10;
		e=x/10000;
		printf("%d%d%d%d%d\n",a,b,c,d,e);
	}
}
