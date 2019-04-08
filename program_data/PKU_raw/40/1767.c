int main(int argc, char* argv[])
{
	double a ,b,c,d,e;
	double S,s,t;
	scanf("%lf",&a);
	scanf("%lf",&b);
	scanf("%lf",&c);
	scanf("%lf",&d);
	scanf("%lf",&e);
	s=(a+b+c+d)/2;
	e=e*PI/360;
	t=(s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(e)*cos(e);
	if(t<0)
	{
		printf("Invalid input");
	}
	else
	{
		S=sqrt(t);
		printf("%.4f",S);
	}

	return 0;
}