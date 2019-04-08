int main()
{
    double squart(double a,double b,double c,double d,double e);
	double x1,x2,x3,x4,y;
	scanf("%lf",&x1);
	scanf("%lf",&x2);
	scanf("%lf",&x3);
	scanf("%lf",&x4);
	scanf("%lf",&y);
	double genhao,s,e1,sum;
	s=(x1+x2+x3+x4)/2; e1=y*pi/360;
    genhao=(s-x1)*(s-x2)*(s-x3)*(s-x4)-x1*x2*x3*x4*cos(e1)*cos(e1);
	if(genhao<0)
		printf("Invalid input\n");
	else
	{
		sum=squart(x1,x2,x3,x4,y);
	    printf("%.4lf",sum);
	}
	return 0;
}
double squart(double a,double b,double c,double d,double e)
{
	double m,s1;
	double n;
	n=e*pi/360;
	s1=(a+b+c+d)/2;
	m=sqrt((s1-a)*(s1-b)*(s1-c)*(s1-d)-a*b*c*d*cos(n)*cos(n));
	return m;
}


	


