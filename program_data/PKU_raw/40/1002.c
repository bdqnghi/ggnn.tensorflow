int main()
{
	double a,b,c,d,s,S,k,t;
	scanf("%lf\n%lf\n%lf\n%lf\n%lf\n",&a,&b,&c,&d,&k);
    s = (a+b+c+d)/2;
	t=(s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(k*PI/2/180)*cos(k*PI/2/180);
    S = sqrt((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(k*PI/2/180)*cos(k*PI/2/180));
	if(t>0)
	{
		printf("%.4lf",S);
	}
	else if(t<0)
	{
		printf("Invalid input");
	}
	return 0;
}