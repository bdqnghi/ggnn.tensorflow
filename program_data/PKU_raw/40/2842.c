int main()
{
	double A,B,C,D,E,F;
	double s(double a,double b,double c,double d,double e);
	scanf("%lf%lf%lf%lf%lf",&A,&B,&C,&D,&E);
	F=s(A,B,C,D,E);
	if (F==0)
		printf("Invalid input");
	else
	    printf("%.4lf",F);
	return 0;
}
double s(double a,double b,double c,double d,double e)
{
	double g,h,z;
	g=(a+b+c+d)/2;
	h=e/360*PI;
	if (((g-a)*(g-b)*(g-c)*(g-d))>=0)
		z=sqrt((g-a)*(g-b)*(g-c)*(g-d)-a*b*c*d*(cos(h))*(cos(h)));
	else
		z=0;
	return z;
}