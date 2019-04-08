main()
{
	long n,m;
	int a,b,c,d,e;
	scanf("%ld",&n);
	a=n%10;
	b=(n-a)/10%10;
	c=(n-a-10*b)/100%10;
	d=(n-a-10*b-100*c)/1000%10;
	e=(n-a-10*b-100*c-1000*d)/10000;
	if(a*b*c*d*e!=0) m=10000*a+1000*b+100*c+10*d+e;
	else if(a*b*c*d!=0) m=1000*a+100*b+10*c+d;
	else if(a*b*c!=0) m=100*a+10*b+c;
	else if(a*b!=0) m=10*a+b;
	else m=a;
	printf("%ld",m);
}