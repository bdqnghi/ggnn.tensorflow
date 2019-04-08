
int main(int argc, char* argv[])
{
	double a,b,c,d,ang,S;
	scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&ang);
    double rad=ang/2/180*3.1415926;
    double s=(a+b+c+d)/2;
	double gen=(s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(rad)*cos(rad);
	if(gen<0)
	{
		printf("Invalid input");
	}
	else
	{
        S=sqrt(gen);
		printf("%.4f",S);
	}
	return 0;
}