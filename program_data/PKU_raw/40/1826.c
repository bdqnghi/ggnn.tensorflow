void main()
{
	double f(double a,double b,double c,double d,double h);
	double a,b,c,d,h,final;
	char x[]={"Invalid input"};
	scanf("%lf",&a);
	scanf("%lf",&b);
	scanf("%lf",&c);
	scanf("%lf",&d);
	scanf("%lf",&h);
	final=f(a,b,c,d,h);
	if(final<0)
		puts(x);
	else printf("%.4lf",final);


}

double f(double a,double b,double c,double d,double h)
{
	double under,s;
	h=h/180*PI;
	s=(a+b+c+d)/2; 
	under=(s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(h/2)*cos(h/2);
	if(under>=0) return (sqrt(under));
	else return(-1);
}