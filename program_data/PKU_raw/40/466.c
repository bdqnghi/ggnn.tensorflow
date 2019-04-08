int main(int argc, char* argv[])
{
	double S,s,a,b,c,d,m;
	scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&m);
	s = (double)1/2*(a+b+c+d); 
	S = (double)sqrt((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos((m/360)*3.1415926)*cos((m/360)*3.1415926)); 
	if ((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos((m/360)*3.1415926)*cos((m/360)*3.1415926)<0)
	{
		printf("Invalid input");
	}
	else
	{
		printf("%.4lf",S);
	}
	return 0;
}
