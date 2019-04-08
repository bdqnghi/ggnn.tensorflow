
int main(int argc, char* argv[])
{
    double a, b, c, d, e, f, s, S, g;
	scanf("%lf%lf%lf%lf%lf", &a, &b, &c, &d, &e);
    #define  pi  3.1415926
	s=1.0/2*(a+b+c+d);
         f=(e/2)*pi/180;	
	g = (s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(f)*cos(f);
	if (g>0)
	{
	S = sqrt(g); 
    printf("%.4lf\n", S);
	}
	else
	{
		printf("Invalid input\n");
	}
	return 0;
}
