double max(double a,double b,double c,double d,double f,double s)
{
	double S;
   S = sqrt((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(f)*cos(f)); 
	return(S);
}
void main()
{
	double a,b,c,d,e,f,s,S,g;
	double max(double a,double b,double c,double d,double f,double s);
	scanf("%lf\n%lf\n%lf\n%lf\n%lf",&a,&b,&c,&d,&e);
    s = (a+b+c+d)/2;
    f=e/360*3.1415926;
    g=(s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(f)*cos(f);
	if(g>=0)
	{
		S=max(a,b,c,d,f,s);
		printf("%.4lf",S);
	}
	else printf("Invalid input");
}