int main()
{
	double a,b,c,d,e,f,s,p;
	scanf("%lf",&a);
	scanf("%lf",&b);
	scanf("%lf",&c);
	scanf("%lf",&d);
	scanf("%lf",&e);
	f=e/360*PI;
	s=(a+b+c+d)/2;
	p=(s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(f)*cos(f);
	if(p<0)
		printf("Invalid input");
	if(p>=0)
		printf("%.4lf",sqrt(p));
	return 0;
}