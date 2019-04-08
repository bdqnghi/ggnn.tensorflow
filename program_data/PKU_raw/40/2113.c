void main()
{
	double a,b,c,d,s,x,pi=3.1415926,t;
	scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&x);
	s=(a+b+c+d)/2;
	x=x/360*2*pi;
	x=x/2;
	t=(s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(x)*cos(x);
	if(t<0)
	{
		printf("Invalid input\n");
	}
	if(t>0)
	{
		t=sqrt(t);
		printf("%.4lf\n",t);
	}
}