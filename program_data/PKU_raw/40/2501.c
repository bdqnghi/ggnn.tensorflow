int main()
{
	double a,b,c,d,e,s,S;
	scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e);
    s = (a+b+c+d)/2;
    S = sqrt((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(e*PI/360)*cos(e*PI/360)); 
	if(((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(e*PI/180))<0)
	{
		printf("Invalid input");
	}
	else
	{
		printf("%.4lf",S);
	}
	return 0;
}