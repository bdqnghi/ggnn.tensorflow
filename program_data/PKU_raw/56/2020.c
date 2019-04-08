int main()
{
	int number,a,b,c,d,e;
	scanf("%d",&number);
	a=0;
	b=0;
	c=0;
	d=0;
	e=0;
	if(number<10&&number>=0)
		printf("%d",e);
	if(number<100000&&number>=10000)
	{
		a=number/10000;
		number=number-a*10000;
	}
	if(number<10000&&number>=1000)
	{
		b=number/1000;
		number=number-b*1000;
	}
	if(number<1000&&number>=100)
	{
		c=number/100;
		number=number-c*100;
	}
	if(number<100&&number>=10)
	{
		d=number/10;
		number=number-d*10;
	}
	e=number;
	if(a!=0)
		printf("%d%d%d%d%d",e,d,c,b,a);
	else
	{
		if(b!=0)
			printf("%d%d%d%d",e,d,c,b);
		else
		{
			if(c!=0)
				printf("%d%d%d",e,d,c);
			else
			{
				if(d!=0)
					printf("%d%d",e,d);
			}
		}
	}
}
 
 
 
