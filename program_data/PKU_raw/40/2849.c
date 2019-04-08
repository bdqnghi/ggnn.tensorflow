double S(double x,double y,double z,double k,double l);
int main()
{
	double a,b,c,d,e,s;
	scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e);
	s=(a+b+c+d)/2;
	if(((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos((PI*e)/360)*cos((PI*e)/360))>0)
	{
       printf("%.4lf",S(a,b,c,d,e));
	}else
	{
		printf("Invalid input");
	}
	return 0;


}
double S(double x,double y,double z,double k,double l)
{
	double c,s;
	s = (x+y+z+k)/2; 
	c = sqrt((s-x)*(s-y)*(s-z)*(s-k) - x*y*z*k*cos((PI*l)/360)*cos((PI*l)/360)); 
	return(c);
    

}

