int main()
{
	double a,b,c,d,e;
	scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e);
	double s=(a+b+c+d)/2;
	double q=((s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(e/360*3.1415926)*cos(e/360*3.1415926));
	if(q<0)
		printf("Invalid input");
	else
	{
		double r=sqrt(q);
		printf("%.4lf",r);
	}
	
}