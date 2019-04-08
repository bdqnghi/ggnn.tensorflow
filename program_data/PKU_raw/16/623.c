int main()
{
	int x,a,b,c,d,e,f,g,h;
	scanf("%d",&x);
	a=x%10;
	b=x%100;
	c=x%1000;
	d=x%10000;
	e=(b-a)/10;
	f=(c-b)/100;
	g=(d-c)/1000;
	if (x<10)
		printf("%d\n",a);
	else if (x<100)
		printf("%d%d\n",a,e);
	else if (x<1000)
		printf("%d%d%d\n",a,e,f);
	else
		printf("%d%d%d%d\n",a,e,f,g);
	return 0;
}