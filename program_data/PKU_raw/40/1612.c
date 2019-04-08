double f(double a,double b,double c,double d,double e)
{
    double i,k,s;
	k=e/360*3.1415926;
	s=(a+b+c+d)/2; 
    i=(s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(k)*cos(k);
	return i;
}
void main()
{
   // double f(double a,double b,double c,double d,double e);
	double S,a,b,c,d,e;
	//scanf("%lf\n,%lf\n,%lf\n,%lf\n,%lf\n",&a,&b,&c,&d,&e);
	scanf("%lf",&a);
    scanf("%lf",&b);
	scanf("%lf",&c);
	scanf("%lf",&d);
	scanf("%lf",&e);
	if(f(a,b,c,d,e)<0)
		printf("Invalid input");
    else 
	{S=sqrt(f(a,b,c,d,e));
	printf("%.4lf",S);
	}
}