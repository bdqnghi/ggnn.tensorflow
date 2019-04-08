int main()
{
	double a,b,c,d,angle,s,S;
	scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&angle);
	s=(a+b+c+d)/2;
	angle=2*PI*angle/360/2;
	S=(s-a)*(s-b)*(s-c)*(s-d)-a*b*d*c*(double)pow(cos(angle),2);
	if(S<0)
		printf("Invalid input");
	else
	{
		S=sqrt(S);
		printf("%.4lf",S);
	}
	return 0;
}
