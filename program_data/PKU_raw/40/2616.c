int main()
{
	double a,b,c,d,s,e,f,S,PI=3.1415926;
	scanf("%lf\n",&a);
	scanf("%lf\n",&b);
	scanf("%lf\n",&c);
	scanf("%lf\n",&d);
	scanf("%lf",&e);
	e=e/360*2*PI;
	s=(a+b+c+d)/2;
	f=(s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(e/2)*cos(e/2);
	if(f<0)
		printf("Invalid input");
	if(f>=0)
	{
		S=sqrt(f);
		printf("%.4lf",S);
	}
	return 0;
}