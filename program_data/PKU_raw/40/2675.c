int main()
{
	double a,b,c,d,s,ds;
	double e;
	scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e);
	e=(double)e*3.1415926/180;
	e=(double)e/2;
	s=(double)(a+b+c+d)/2;
	ds=(double)((s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(e)*cos(e));
	if(ds<0)
	{
		printf("Invalid input");
	}
	else
	{
		ds=sqrt(ds);
		printf("%.4lf",ds);
	}
	return 0;
}
