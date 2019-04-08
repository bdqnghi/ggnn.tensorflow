int main()
{
	double a,b,c,d,e,A,s,S;
	scanf("%lf%lf%lf%lf",&a,&b,&c,&d);
	scanf("%lf",&A);
	A=A/2/180*PI;
	e=cos(A);
	s = (a+b+c+d)/2;
	if((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*e*e<0)
		printf("Invalid input\n");
	else 
	{
		S = sqrt((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*e*e); 
		printf("%.4f",S);
	}	
	return 0;
}