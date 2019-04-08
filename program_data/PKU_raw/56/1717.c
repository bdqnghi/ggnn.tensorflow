int main()
{
    int x,a,b,c,d,e;
	scanf("%d",&x);
	a=x/10000;
	b=x/1000-10*a;
	c=x/100-100*a-10*b;
	d=x/10-1000*a-100*b-10*c;
	e=x%10;
	if (a!=0)
	printf("%d%d%d%d%d",e,d,c,b,a);
	else if (b!=0)
		printf("%d%d%d%d",e,d,c,b);
	else if (c!=0)
		printf("%d%d%d%",e,d,c);
    else if (d!=0)
		printf("%d%d",e,d);
	else printf("%d",e);
    return 0;
}