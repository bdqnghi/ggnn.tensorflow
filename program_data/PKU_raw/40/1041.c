int main(int argc, char* argv[])
{
	double a,b,c,d,e,f,s,t;
	scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e);
	s = (a+b+c+d)/2;
         f=cos(3.1415926*e/360);
	t = (s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*pow(f,2); 
	if(t<0)
		printf("Invalid input\n");
	else 
	         printf("%.4lf\n",sqrt(t));
	return 0;
}