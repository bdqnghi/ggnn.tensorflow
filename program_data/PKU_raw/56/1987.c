int main()
{
	long int n;
	int a,b,c,d,e,p;
	scanf("%ld",&n);
	if(n>9999)
		p=5;
	else
	{
		if(n>999&&n<=9999)
			p=4;
		else
		{
			if(n>99&&n<=999)
				p=3;
			else
			{
				if(n>9&&n<=99)
					p=2;
				else
					p=1;
			}
		}
	}
	switch(p)
	{
	case 5:
		a=n/10000;
		b=(n-a*10000)/1000;
		c=(n-10000*a-1000*b)/100;
		d=(n-10000*a-1000*b-100*c)/10;
		e=(n-10000*a-1000*b-100*c-10*d)/1;
		printf("%d%d%d%d%d",e,d,c,b,a);
		break;
	case 4:
		b=n/1000;
		c=(n-1000*b)/100;
		d=(n-1000*b-100*c)/10;
		e=(n-1000*b-100*c-10*d)/1;
		printf("%d%d%d%d",e,d,c,b);
		break;
	case 3:
		c=n/100;
		d=(n-100*c)/10;
		e=(n-100*c-10*d)/1;
		printf("%d%d%d",e,d,c);
		break;
	case 2:
		d=n/10;
		e=(n-10*d)/1;
		printf("%d%d",e,d);
		break;
	case 1:
		e=n/1;
		printf("%d",e);
	}
	return 0;
}
		