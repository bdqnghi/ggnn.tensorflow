double i(double a,double b,double c,double d,double n)
{
	double s,S,pi,k;
	pi=3.1415926;
	s=(a+b+c+d)/2;
	k=n/180*pi;
	S=(s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(k/2)*cos(k/2);
	if(S<0)
		printf("Invalid input");
	else
		printf("%.4lf",sqrt(S));
	return 0;
}
int main()
{
	double a,b,c,d,n;
	scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&n);
	i(a,b,c,d,n);
}