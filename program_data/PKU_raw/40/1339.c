double s(double a,double b,double c,double d,double r)
{
	double result;
	result=((a+b+c+d)/2-a)*((a+b+c+d)/2-b)*((a+b+c+d)/2-c)*((a+b+c+d)/2-d)-a*b*c*d*cos(3.1415926/180*r/2)*cos(3.1415926/180*r/2);
	if(result>=0)
	result=sqrt(((a+b+c+d)/2-a)*((a+b+c+d)/2-b)*((a+b+c+d)/2-c)*((a+b+c+d)/2-d)-a*b*c*d*cos(3.1415926/180*r/2)*cos(3.1415926/180*r/2));
	return result;
}
int main()
{                             
	double mj, a, b, c, d, r;
	scanf("%lf",&a);
	scanf("%lf",&b);
	scanf("%lf",&c);
	scanf("%lf",&d);
	scanf("%lf",&r);
	mj=s(a, b, c, d ,r);
	if (mj>=0)
		printf("%.4lf",mj);
	else 
		printf("Invalid input");
	return 0;
}
