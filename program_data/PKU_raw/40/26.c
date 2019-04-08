
void main()
{
	double a,b,c,d,x,s,S;
	scanf("%lf %lf %lf %lf %lf",&a,&b,&c,&d,&x);
	s = 0.5*(a+b+c+d); 
	x = x/2/360*2*pai;
	S = sqrt((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(x)*cos(x)); 
	if( ((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(x)*cos(x))<0)
	{
		printf("Invalid input");
	}
	else
	{
		printf("%.4lf",S);
	}
}