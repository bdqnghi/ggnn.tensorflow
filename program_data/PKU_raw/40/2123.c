int main()
{
	double a,b,c,d,e,s,t,pi,ang;
	scanf("%lf\n",&a);
	scanf("%lf\n",&b);
	scanf("%lf\n",&c);
	scanf("%lf\n",&d);
	scanf("%lf",&ang);
	pi=3.1415926;
	s=(a+b+c+d)/2;
	e=ang*pi/180;
	t=(s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(e/2)*cos(e/2);
	if(t<0)printf("Invalid input");
	else
	printf("%.4lf\n",sqrt(t));
}
