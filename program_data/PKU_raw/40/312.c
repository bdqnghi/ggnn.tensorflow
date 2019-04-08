int main()
{
	double a,b,c,d,s,S;
	double e,x;
	scanf("%lf %lf %lf %lf %lf",&a,&b,&c,&d,&x);
	s=(a+b+c+d)/2;
	e=cos(x/720*2*PI);
    S=sqrt((s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*e*e);
	if (((s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*e*e)<0)
	printf("Invalid input\n");
    if (((s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*e*e)>=0)
	printf("%.4lf\n",S);
	return 1;
}