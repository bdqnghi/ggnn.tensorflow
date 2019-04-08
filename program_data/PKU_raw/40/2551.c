
int main()
{
	double a,b,c,d;
	scanf("%lf",&a);
	scanf("%lf",&b);
	scanf("%lf",&c);
	scanf("%lf",&d);
	double hh;
	scanf("%lf",&hh);
	double s;
	s = (a+b+c+d)/2;
	hh=hh/360*3.141592;
	hh=cos(hh);
	double S;
	double SS=(s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*hh*hh;
	if (SS<0)
	{
		printf("Invalid input");
		return 0;
	}
	S = sqrt(SS);
	printf ("%0.4lf",S);
	return 0;
	
} 
 