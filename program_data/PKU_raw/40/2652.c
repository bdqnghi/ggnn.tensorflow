double area(double a1, double b1 ,double c1, double d1, double e1);
int main()
{
	double a,b,c,d,e;
	double S;
	scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e);
	S=area(a,b,c,d,e);
	if(S==-1)
	{
		printf("Invalid input");
	}
	else
	{
		printf("%.4lf",S);
	}
	return 0;
}
double area(double a1, double b1,double c1, double d1, double e1)
{
	double s,y,S;
	s = (a1+b1+c1+d1)/2; 
	y=(double)(s-a1)*(s-b1)*(s-c1)*(s-d1) - a1*b1*c1*d1*cos(e1/360.0*PI)*cos(e1/360.0*PI);
	if(y<0)
	{
		S=-1;
	}
	else
	{
		S=(double)sqrt((s-a1)*(s-b1)*(s-c1)*(s-d1) - a1*b1*c1*d1*cos(e1/360.0*PI)*cos(e1/360.0*PI)); 
	}
	return S;
}