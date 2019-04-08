int main ()
{
    double a, b, c, d,  m, s;
	scanf("%lf%lf%lf%lf%lf",  &a, &b, &c, &d, &m); 
    m=m/360*3.1415926;
	s=1.0/2*(a+b+c+d); 
	s= (s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(m)*cos(m);
	if (s<0)
		printf("Invalid input\n");
		else printf("%.4f\n", sqrt(s));
	return 0;
}

