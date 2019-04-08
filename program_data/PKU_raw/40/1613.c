
double f(double a,double b,double c,double d,double ang)
{
	double p,q,y;
	ang=ang/2.0/180.0*3.1415926;
	p=(a+b+c+d)/2.0;
	q=(p-a)*(p-b)*(p-c)*(p-d)-a*b*c*d*cos(ang)*cos(ang);
	y=sqrt(q);
	if(q<0)
		printf("Invalid input");
	else
		printf("%.4lf",y);
}
void main()
{
	double a,b,c,d,ang;
	scanf("%lf %lf %lf %lf %lf",&a,&b,&c,&d,&ang);
	f(a,b,c,d,ang);
}

