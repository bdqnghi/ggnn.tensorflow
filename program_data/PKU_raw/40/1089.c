double a,b,c,d,a1;
void main()
{
	double sq,s,m;
	double S();
	scanf("%lf",&a);
	scanf("\n");
	scanf("%lf",&b);
	scanf("\n");
	scanf("%lf",&c);
	scanf("\n");
	scanf("%lf",&d);
	scanf("\n");
	scanf("%lf",&a1);
	s=(a+b+c+d)/2;
	if((s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*m*m<0)
		printf("Invalid input");
	else
	
	{sq=S();
	printf("%.4lf",sq);
	}
}


	double S()
	{
		double a2,s,sq,m;
		a2=(a1*PI)/360;
		m=cos(a2);
		s=(a+b+c+d)/2;
		sq=sqrt((s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*m*m);
		return sq;
	}


