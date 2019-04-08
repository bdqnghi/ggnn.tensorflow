int main()
{
	double a,b,c,d,e,f,s,S;
	scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e);
	s=(a+b+c+d)/2;
	f=e*PI/360;
	if(((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(2*f))<0) 
		printf("Invalid input");
	else 
	{
		S =sqrt((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(f)*cos(f));
		printf("%.4lf",S);
	}
	return 0;
}
