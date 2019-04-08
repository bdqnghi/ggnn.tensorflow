void main ()
{
	int a,b,c,e,f,g,h;
	scanf("%d",&h);
	g=log10(h)+1;
	f=h/10000;
	e=(h-10000*f)/1000;
	c=(h-10000*f-1000*e)/100;
	b=(h-10000*f-1000*e-100*c)/10;
	a=h-10000*f-1000*e-100*c-10*b;
	switch (g)
	{
	case 5:printf("%d%d%d%d%d",a,b,c,e,f);break;
	case 4:printf("%d%d%d%d",a,b,c,e);break;
	case 3:printf("%d%d%d",a,b,c);break;
	case 2:printf("%d%xd",a,b);break;
	case 1:printf("%d",a);
	}
}
