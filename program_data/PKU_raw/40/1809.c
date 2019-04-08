
void main()
{
	double area(double a,double b,double c,double d,double m);
	double S,s,a,b,c,d,m;
	void print();
	scanf("%lf\n%lf\n%lf\n%lf\n%lf",&a,&b,&c,&d,&m);
    s=(a+b+c+d)/2;
	if((s-a)*(s-b)*(s-c)*(s-d)<a*b*c*d*cos(m*PI/360)*cos(m*PI/360))
		print();

	else
	{
		S=area(a,b,c,d,m);
	    printf("%.4lf",S);
	}
}
void print()
{
	printf("Invalid input");
}
double area(double a,double b,double c,double d,double m)
{
	double S,s;
	s=(a+b+c+d)/2;
	S=sqrt((s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(m*PI/360)*cos(m*PI/360));
	return(S);
}