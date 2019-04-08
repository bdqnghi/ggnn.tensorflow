int main()
{
	double a,b,c,d,x;
	scanf("%lf",&a);
		printf("\n");
	scanf("%lf",&b);
		printf("\n");
	scanf("%lf",&c);
		printf("\n");
	scanf("%lf",&d);
		printf("\n");
	scanf("%lf",&x);
		printf("\n");
	x=x*PI/360;
	float s;
	double S;
	s = (float)1/2*(a+b+c+d);
	S=(s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*pow(cos(x),2);
	if (S<=0)
	{
		printf("Invalid input");
	}
	else
	{
		S = sqrt((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*pow(cos(x),2)); 
	 	printf("%.4f",S);
	}
	return 0;
}