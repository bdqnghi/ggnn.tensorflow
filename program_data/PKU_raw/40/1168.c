
void main()
{
	double a,b,c,d,e;
	scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e);
	void square(double,double,double,double,double);
	square(a,b,c,d,e);

}

void square(double a,double b,double c,double d,double e)
{
	double s,o,S,f;
	f=e/2;
	s=(a+b+c+d)/2;
	o=(PI*f)/180;
	if(((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(o)*cos(o))<0)
		printf("Invalid input\n");
	else
	{
		S=sqrt((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(o)*cos(o));
		printf("%.4lf",S);}
}


