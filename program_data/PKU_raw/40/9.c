
int main()
{
	double a,b,c,d;
	double al,af;
	scanf("%lf",&a);
	scanf("%lf",&b);
	scanf("%lf",&c);
	scanf("%lf",&d);
	scanf("%lf",&al);
	af = al / 180 * pai;
	double s = 0.5*(a+b+c+d); 
	if( (s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(af/2)*cos(af/2) >= 0)
	{
		double S = sqrt((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(af*0.5)*cos(af*0.5));
		printf("%.4lf\n",S);
	}
	else
	{
		printf("Invalid input");
	}
	return 0;
}