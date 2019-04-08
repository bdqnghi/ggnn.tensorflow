

int main()
{   double S,s,a,b,c,d,e;
    double f;
    scanf ("%lf %lf %lf %lf %lf",&a,&b,&c,&d,&e);
    s = (a+b+c+d)/2;
	f=(s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(e/2*(3.1415926/180))*cos(e/2*(3.1415926/180));
    S = sqrt(f);
	if (f<0)  
    printf("Invalid input");
	else 
		printf("%.4lf",S);
	return 0;

}