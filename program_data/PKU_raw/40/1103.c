int main()
{
	float PI=3.1415926;
	float a,b,c,d,y;
	scanf("%f",&a);
	scanf("%f",&b);
	scanf("%f",&c);
	scanf("%f",&d);
	scanf("%f",&y);
	double x=y/2.0;
	double s=(a+b+c+d)/2;
    double ss=(s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(x*PI/180)*cos(x*PI/180);
	if(ss<0)
	{
		printf("Invalid input\n");
	}
	else
	{
		double mianji=sqrt(ss);
		printf("%.4f\n",mianji);
	}
	return 1;
}

