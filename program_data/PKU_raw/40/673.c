
double Area(double a, double b, double c, double d, double alpha);

int main()
{
	double a, b, c, d, alpha0, area;
	scanf("%lf %lf %lf %lf %lf", &a, &b, &c, &d, &alpha0);
	area = Area(a, b, c, d, alpha0*(PI/360));
	if (area==-1)
		printf("Invalid input\n");
	else
		printf("%0.4lf\n", area);
	return 0;
}

double Area(double a, double b, double c, double d, double alpha)
{
	double s, sqarea, area;
	s = 0.5*(a+b+c+d); 
	sqarea = (s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*pow(cos(alpha),2);
	if (sqarea>=0)
		area = sqrt(sqarea);
	else
		return -1;
	return area;
}