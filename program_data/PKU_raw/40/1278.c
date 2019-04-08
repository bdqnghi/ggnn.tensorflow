int main()
{
	double S,s,a,b,c,d,e;
	scanf("%lf",&a);
	scanf("%lf",&b);
	scanf("%lf",&c);
	scanf("%lf",&d);
	scanf("%lf",&e);
	s=(a+b+c+d)/2;
	if((s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(e*3.1415926/360)*cos(e*3.1415926/360)<0)
	{
		printf("Invalid input");
	}
	else
	{
		printf("%.4lf",sqrt((s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(e/360*3.1415926)*cos(e/360*3.1415926)));
	}
	return 0;
}
