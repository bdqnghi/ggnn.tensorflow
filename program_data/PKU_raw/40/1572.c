double f(double,double,double,double,double);
void main()
{
	double a,b,c,d,p,m;
	scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&p);
	p=p/360*3.1415926;
	m=f(a,b,c,d,p);
	if(m>0) printf("%.4lf",sqrt(m));
	else printf("Invalid input");
}
double f(double a,double b,double c,double d,double p)
{
	double s=(a+b+c+d)/2;
	return((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(p)*cos(p));
}
	

