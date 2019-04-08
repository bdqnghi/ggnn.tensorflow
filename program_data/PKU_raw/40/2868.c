void main()
{
	double a,b,c,d,e,f,s,S;
	scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e);
	s = (a+b+c+d)/2;

S = sqrt((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(3.1415926*e/360)*cos(3.1415926*e/360)); 
    
S>0?printf("%.4lf",S):printf("Invalid input");

}