int main()
{
	double a,b,c,d,g;
	double e,f,S;
	scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e);
	g=(a+b+c+d)/2;
	f=P*e/360;
	S=sqrt((g-a)*(g-b)*(g-c)*(g-d)-a*b*c*d*pow(cos(f),2));
	if((g-a)*(g-b)*(g-c)*(g-d)-a*b*c*d*pow(cos(f),2)<0)
		printf("Invalid input");
	else 
		printf("%.4lf",S);
	return 0;
}
