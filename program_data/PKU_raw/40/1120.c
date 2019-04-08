double a,b,c,d,s,S,f,PI=3.1415926;
void abc()
{
	s=(a+b+c+d)/2;
	if(((s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(f/360*PI)*cos(f/360*PI))>0)
	{
    S=sqrt((s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(f/360*PI)*cos(f/360*PI));
	printf("%.4lf",S);
	}
	else
	{
	printf("Invalid input");
	}
	
}
void main()
{
	scanf("%lf %lf %lf %lf %lf",&a,&b,&c,&d,&f);
    abc();
	
	
}