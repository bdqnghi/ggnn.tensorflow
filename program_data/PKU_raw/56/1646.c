void main()
{
	unsigned int x;
    scanf("%d",&x);
    if(x<=9) printf("%d",x);
    else if(x<=99)
	{
    int a,b;
	a=x/10;
	b=x-10*a;
	printf("%d%d\n",b,a);
	}
	else if(x<=999)
	{
		int a,b,c;
		a=x/100;
		b=(x-100*a)/10;
		c=x-100*a-10*b;
	printf("%d%d%d\n",c,b,a);
	}
	else if(x<=9999)
	{
		int a,b,c,d;
		a=x/1000;
		b=(x-1000*a)/100;
		c=(x-1000*a-100*b)/10;
		d=x-1000*a-100*b-10*c;
	printf("%d%d%d%d\n",d,c,b,a);
	}
    else if(x<=99999)
	{
		int a,b,c,d,e;
		a=x/10000;
		b=(x-10000*a)/1000;
		c=(x-10000*a-1000*b)/100;
		d=(x-10000*a-1000*b-100*c)/10;
		e=(x-10000*a-1000*b-100*c-10*d);
		printf("%d%d%d%d%d\n",e,d,c,b,a);
	}
}