
int main()
{
	double a,b,c,d,e,f,g,s;
	f=0,s=0,g=0;
	scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e);
	if(e>0&&e<360)
	{
		e=(e/360)*2*(PI);
		s=(a+b+c+d)/2;
		g=(s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(e/2)*cos(e/2);
		f=sqrt(g);
	}
	if(g<0)
	{
		printf("Invalid input\n");
	}
	else
	{
		printf("%.4f\n",f);
	}
	return 0;
}