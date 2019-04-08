int main(int argc, char* argv[])
{
	double a,b,c,d,e,s,S;
	scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e);
	s = 1.0/2*(a+b+c+d);
    S = sqrt((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*pow(cos(e*3.1415926/360),2));
	if(((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*pow(cos(e*3.1415926/360),2))<0)
	{
		printf("Invalid input");
	}
	else
	{
	    printf("%.4lf",S);
	}
	return 0;
}

