
int main(int argc, char* argv[])
{
    double a,b,c,d,t,s,S,h;
	scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&t);
	s = 0.5*(a+b+c+d); 
    h=(t/180.0)*3.1415926;
	if((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(h/2)*cos(h/2)<0)
	    printf("Invalid input\n");
	else
	{
	    S = sqrt((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(h/2)*cos(h/2));
	    printf("%.4f",S);
	}
	return 0;
}

