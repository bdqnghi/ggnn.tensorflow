double area(double a,double b,double c,double d,double e)
{
	double s,angle,value,S;
	s=(a+b+c+d)/2;
	angle=(cos(e*PI/360))*(cos(e*PI/360));
	value=(s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*angle;
	if(value>=0)
	{
		S=sqrt(value);
		return S;
	}
	else
		return -1;
}
void main()
{
	double a,b,c,d,e,j;
	scanf("%lf",&a);
	scanf("%lf",&b);
	scanf("%lf",&c);
	scanf("%lf",&d);
	scanf("%lf",&e);
	j=area(a,b,c,d,e);
	if(j==-1)
		printf("Invalid input\n");
	else
		printf("%.4lf\n",j);
}
