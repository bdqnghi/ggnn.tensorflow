void main ()
{
	double rtrt(double a,double b,double c,double d,double angle);
	double area,p,a,b,c,d,angle;
	scanf ("%lf %lf %lf %lf %lf",&a,&b,&c,&d,&angle);
	p=rtrt(a,b,c,d,angle);
	if (p<0)
		printf("Invalid input");
	else 
	{
		area=sqrt(p);
		printf("%.4lf",area);
	}
}
double rtrt(double a,double b,double c,double d,double angle)
{
	double pi=3.1415926;
	double s,p;
	s=(a+b+c+d)/2;
	angle=(angle*pi)/360.0;
	p=(s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(angle)*cos(angle);
	return p;
}
