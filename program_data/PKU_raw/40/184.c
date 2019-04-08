int main()
{
    double a,b,c,d,e,f,s,m;
	scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e);
	s = (a+b+c+d)/2;
	f=e*PI/180;
	if( (s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(f/2)*cos(f/2)>0)
	{
			m = sqrt((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(f/2)*cos(f/2));
			printf("%.4lf\n",m);
	}
	else 
	{
		printf("Invalid input");
	}
	return 0 ;
}
