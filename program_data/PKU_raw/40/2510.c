double S(double a ,double b,double c,double d,double x);
int main()
{
	double a,b,c,d,x;
	double result;
	scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&x);
	result = S(a,b,c,d,x);
	if(result<0)
	{
		printf("Invalid input\n");
	}
	else
	{
	printf("%.4lf\n",result);
	}
	return 0;
}

double S(double a,double b,double c,double d,double x)
{
	double result = 0;
	double s,y;
	s=(a+b+c+d)/2;
	y=(s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(x/2/180*PI)*cos(x/2/180*PI);
	if(y<0)
		{
			result=-1;
		}
	else
		{
			result=sqrt(y);
		}
	return result;
}