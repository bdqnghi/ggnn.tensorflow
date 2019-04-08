void main()
{
	int a, b, c, d, e, f;
	scanf("%d", &a);
	if(a<100)
	{
		b=a/10;
	    c=a-(b*10);
	    a=10*c+b;
	    printf("%d\n", a);
	}
	else if(a<1000)
	{
		b=a/100;
		c=(a-100*b)/10;
		d=(a-100*b-10*c);
		a=100*d+10*c+b;
		printf("%d\n", a);
	}
	else if(a<10000)
	{
		b=a/1000;
		c=(a-1000*b)/100;
		d=(a-1000*b-100*c)/10;
		e=a-1000*b-100*c-10*d;
		a=1000*e+100*d+10*c+b;
		printf("%d\n", a);
	}
	else if(a<100000)
	{
		b=a/10000;
		c=(a-10000*b)/1000;
		d=(a-10000*b-1000*c)/100;
		e=(a-10000*b-1000*c-100*d)/10;
		f=a-10000*b-1000*c-100*d-10*e;
		a=10000*f+1000*e+100*d+10*c+b;
		printf("%d\n", a);
	}
	
}