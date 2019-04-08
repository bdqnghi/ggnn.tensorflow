main()
{
	double surface(double a,double b,double c,double d,double e,double s);
    double a,b,c,d,e,s,S;
    scanf("%lf %lf %lf %lf %lf",&a,&b,&c,&d,&e);
    S=surface(a,b,c,d,e,s);
    	
}
double surface(double a,double b,double c,double d,double e,double s)
{
	double S;
	s=0.5*(a+b+c+d); 
	S=sqrt((s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(e*3.1415926/360)*cos(e*3.1415926/360)); 
	if((s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(e*3.1415926/360)*cos(e*3.1415926/360)<0)printf("Invalid input");
    else printf("%.4lf",S);
    return S;
}
