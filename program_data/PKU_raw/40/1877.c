double S(double a,double b,double c,double d,double e);
int main()
{
	double a,b,c,d,e;
	scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e);
    if(S(a,b,c,d,e)==-1) 
	{
		printf("Invalid input\n");
	}
	else 
	{
		printf("%.4lf",S(a,b,c,d,e));
	}
}
double S(double a,double b,double c,double d,double e)
{
	double s,f,t,m;
	s=(a+b+c+d)/2;
	f=e*3.1415926/(180*2);
	t=(s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(f)*cos(f);
	if(t>=0) 
	{
		m=sqrt(t);
		return(m);
	}
	else 
	{
		return (-1);
	}
}