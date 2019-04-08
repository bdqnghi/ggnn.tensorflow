void main()
{
	double a,b,c,d,m,s,S,t;
	scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&m);
	m=m/360*pi;
    s=(a+b+c+d)/2;
	t=cos(m)*cos(m);
    if((s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*t<0)
		printf("Invalid input\n");
	else
	{
		S=sqrt((s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*t);
		printf("%.4lf\n",S);
	}
}
