void main()
{
	long x;
	int p,a,b,c,d,e;
	scanf("%ld",&x);
	if(x>9999)
		p=5;
	else if(x>999)
		p=4;
	else if(x>99)
		p=3;
	else if(x>9)
		p=2;
	else p=1;
	switch(p)
	{
	case 1:printf("%d\n",x);break;
	case 2:b=x/10;
		a=x-b*10;
		printf("%d%d\n",a,b);break;
	case 3:c=x/100;
		b=(x-c*100)/10;
		a=x-c*100-b*10;
		printf("%d%d%d\n",a,b,c);break;
	case 4:d=x/1000;
		c=(x-d*1000)/100;
		b=(x-d*1000-c*100)/10;
		a=x-d*1000-c*100-b*10;
		printf("%d%d%d%d\n",a,b,c,d);break;
	case 5:e=x/10000;
		d=(x-e*10000)/1000;
		c=(x-e*10000-d*1000)/100;
		b=(x-e*10000-d*1000-c*100)/10;
		a=x-e*10000-d*1000-c*100-b*10;
		printf("%d%d%d%d%d\n",a,b,c,d,e);break;
	}
}

