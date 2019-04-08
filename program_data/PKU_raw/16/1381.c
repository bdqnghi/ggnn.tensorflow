int main()
{
	int s,a,b,c,d,e;
	scanf("%d",&s);
	a=s/10000;
	b=(s-10000*a)/1000;
	c=(s-10000*a-1000*b)/100;
	d=(s-10000*a-1000*b-100*c)/10;
	e=(s-10000*a-1000*b-100*c-10*d);
	if (a!=0) printf("%d%d%d%d%d",e,d,c,b,a);
	else if(b!=0) printf("%d%d%d%d",e,d,c,b);
	else if(c!=0) printf("%d%d%d",e,d,c);
	else if(b!=0) printf("%d%d",e,d);
	else if(e!=0) printf("%d",e);
	else printf("0");

	return 0;
}
