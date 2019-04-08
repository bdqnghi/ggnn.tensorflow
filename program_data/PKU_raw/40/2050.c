double s(double a,double b,double c,double d,double t)
{
	double s,u,ar;
	s=(a+b+c+d)/2;
	u=(t*PI)/360;
    ar=(s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(u)*cos(u);
	return(ar);
}
int main()
{
	double a,b,c,d,t,area;
	scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&t);
	area=s(a,b,c,d,t);
	if(area<0) printf("Invalid input");
	else 
	{
		area=sqrt(area);
		printf("%.4lf",area);
	}
return 0;
}