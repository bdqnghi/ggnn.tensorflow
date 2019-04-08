void f(double a,double b,double c,double d,double alpha)
{
	double s;
	double result;
	alpha=alpha*3.1415926535898/180;
	s=(a+b+c+d)/2;
	result= (s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(alpha/2)*cos(alpha/2);
	if(result<0)
		printf("Invalid input\n");
	else
	{
		result=sqrt(result);
		printf("%.4lf",result);
	}


}
main()
{
	double a,b,c,d;
	double alpha;
	scanf("%lf",&a);
	scanf("%lf",&b);
	scanf("%lf",&c);
	scanf("%lf",&d);
	scanf("%lf",&alpha);
	f(a,b,c,d,alpha);

}