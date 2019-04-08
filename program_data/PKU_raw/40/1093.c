int main()
{
	double a,b,c,d,x,s,S,y,m;
	scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&x);
	double f(double a,double b,double c,double d,double m);
	y=(PI*x)/360;
	m=cos(y);
	if(m<0||(int)(10000*m)==0)
		printf("Invalid input\n");
	else
	{
		S=f(a,b,c,d,m);
		printf("%.4lf\n",S);
	}
	return 0;
}
double f(double a,double b,double c,double d,double m)
{
	double s,S;
	s=(a+b+c+d)/2;
	S=sqrt((s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*m*m); 
	return S;
}
