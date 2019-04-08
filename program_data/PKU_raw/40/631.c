int main()
{
	double a,b,c,d,e,f,s;
	scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e);
    s=0.5*(a+b+c+d);
	e=e/2*3.1415926/180;
	f=(s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(e)*cos(e);
	if (f<0) 
	{printf("Invalid input");
	 return 0;
	}
	printf("%.4lf",sqrt(f));
	return 0;
}