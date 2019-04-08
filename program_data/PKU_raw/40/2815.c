int main()
{
	double a,b,c,d,x;
	double S(double a,double b,double c,double d,double x);
	scanf("%lf %lf %lf %lf %lf",&a,&b,&c,&d,&x);
	if(S(a,b,c,d,x)>=0)
		printf("%5.4lf",S(a,b,c,d,x));
	else
		printf("Invalid input");
	return 0;	
}
double S(double A,double B,double C,double D,double X)
{
    double s,y,z;
	s=(A+B+C+D)/2;
	y=X*P/360;
	if((s-A)*(s-B)*(s-C)*(s-D)-A*B*C*D*cos(y)*cos(y)<0)
		z=-1.0;
	else 
		z=sqrt((s-A)*(s-B)*(s-C)*(s-D)-A*B*C*D*cos(y)*cos(y));
	return z;
}