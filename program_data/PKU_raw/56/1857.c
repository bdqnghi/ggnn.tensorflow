main()
{
	int n,a,b,c,d,e;
	scanf("%ld",&n);
	a=n/10000;
	b=(n-a*10000)/1000;
	c=(n-a*10000-b*1000)/100;
	d=(n-a*10000-b*1000-c*100)/10;
	e=n-a*10000-b*1000-c*100-d*10;
	if(e!=0) printf("%d",e);
	if(d!=0) printf("%d",d);
	if(c!=0) printf("%d",c);
	if(b!=0) printf("%d",b);
	if(a!=0) printf("%d",a);
}
