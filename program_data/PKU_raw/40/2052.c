void main()
{
	void mianji(double a,double b,double c,double d,double e);
	double a, b, c, d, e;
	scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e);
	mianji(a,b,c,d,e);
}

void mianji(double a,double b,double c,double d,double e)
{
	double s,genghaonei;
	s=(a+b+c+d)/2; 
	genghaonei=(s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(e/360*3.1415926)*cos(e/360*3.1415926);
	if(genghaonei<0)
		printf("Invalid input");
	else
	{
		double jieguo;
		jieguo=sqrt(genghaonei);
		printf("%.4lf",jieguo);
	}
}