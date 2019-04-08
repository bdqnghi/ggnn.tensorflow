int main()
{
	double squ(double a,double b,double c,double d,double e);
	double a,b,c,d,e,y,s,n,f;
	scanf ("%lf\n%lf\n%lf\n%lf\n%lf",&a,&b,&c,&d,&e);
	s=(a+b+c+d)/2;
	f=e*3.1415926/360;
	n=(s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(f)*cos(f);
	if (n<0)
		printf ("Invalid input\n");
	else
	{
		y=squ(a,b,c,d,e);
	    printf("%.4f\n",y);
	}
	return 0;
}

double squ(double a,double b,double c,double d,double e)
{
	double s,m,n,f;
	s=(a+b+c+d)/2;
	f=e*3.1415926/360;
	n=(s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(f)*cos(f);
	m=sqrt(n);
	return (m);
}

