void main()
{
	double S(double a,double b,double c,double d,double s,double n);
	double a,b,c,d,s,m,n,area,PI=3.1415926;
	scanf("%lf\n%lf\n%lf\n%lf\n%lf",&a,&b,&c,&d,&m);
	s=(a+b+c+d)/2;
	n=m/(2*180)*PI;
	if(S(a,b,c,d,s,n)>=0)
	{area=sqrt(S(a,b,c,d,s,n));
	printf("%.4lf",area);}
	else printf("Invalid input");
}
double S(double a,double b,double c,double d,double s,double n)
{
	double z;
	z=(s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(n)*cos(n);
	return(z);
}