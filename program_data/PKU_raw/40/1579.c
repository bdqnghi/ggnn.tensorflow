

double compute(double a,double b,double c,double d,double sum)
{
	double mianji=0;
	double s=(a+b+c+d)/2;
	double hudu=sum*PI/360;
	mianji=(s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(hudu)*cos(hudu);
	if(mianji>=0)
		mianji=sqrt(mianji);
	return mianji;
}

void main()
{
	double a,b,c,d,sum;
	double v;

	scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&sum);
	v=compute(a,b,c,d,sum);
	if(v<0)
		printf("Invalid input\n");
	else
		printf("%.4lf\n",v);
}