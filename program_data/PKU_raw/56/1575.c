
main()
{
	int a,b,c,d,e,f,g,h,n;
	scanf("%d",&n);
	a=n%10;
	b=n/10;
	c=b%10;
	d=b/10;
	e=d%10;
	f=d/10;
	g=f%10;
	h=f/10;
	switch((b>0)+(d>0)+(f>0)+(h>0))
	{
	case 0:
		printf("%d\n",a);
		break;
	case 1:
		printf("%d\n",a*10+c);
		break;
	case 2:
		printf("%d\n",a*100+c*10+e);
		break;
	case 3:
		printf("%d\n",a*1000+c*100+e*10+g);
		break;
	case 4:
		printf("%d\n",a*10000+c*1000+e*100+g*10+h);
	}
}
