void main()
{
	int a,b,c,d,e,f,g;
	scanf("%d",&a);
	b=(a%100000)/10000;
	c=(a%10000)/1000;
	d=(a%1000)/100;
	e=(a%100)/10;
	f=a%10;
	g=b*1+c*10+d*100+e*1000+f*10000;
	if(a>9999)
		;
	else
	    if(a>999)
			g=g/10;
    else
		if(a>99)
			g=g/100;
		else
			if(a>9)
				g=g/1000;
			else
				g=g/10000;
	printf("%d",g);
}