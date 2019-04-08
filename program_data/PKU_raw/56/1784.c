void main()
{
	int a,b,c,d,e;
	unsigned int num;
	scanf("%u",&num);
    if(num>10000)
	{
		a=num/10000;
		b=(num-a*10000)/1000;
		c=(num-a*10000-b*1000)/100;
		d=(num-a*10000-b*1000-c*100)/10;
		e=num-a*10000-b*1000-c*100-d*10;
		printf("%d%d%d%d%d\n",e,d,c,b,a);
	}
	else if((num<10000)&&(num>1000))
	{
		b=num/1000;
		c=(num-b*1000)/100;
		d=(num-b*1000-c*100)/10;
		e=num-b*1000-c*100-d*10;
		printf("%d%d%d%d\n",e,d,c,b);
	}
	else if((num<1000)&&(num>100))
	{
		c=num/100;
		d=(num-c*100)/10;
		e=num-c*100-d*10;
		printf("%d%d%d\n",e,d,c);
	}
	else if((num<100)&&(num>10))
	{
		d=num/10;
		e=num-d*10;
		printf("%d%d\n",e,d);
	}
	else if(num<10)
	{
		e=num;
		printf("%d\n",e);
	}	
}