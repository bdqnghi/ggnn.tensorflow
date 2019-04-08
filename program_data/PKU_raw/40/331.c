int main()
{

	double a,b,c,d,t,s,f,n,x;
	scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&t);
	s =(double) 1/2*(a+b+c+d);
	n=(double)3.1415926*2*t/360;
    x=(s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*(1+cos(n))/2;
	if (x>=0)
	{
	f=(double) sqrt((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*(1+cos(n))/2); 
	printf("%.4lf",f);
	}
	else printf("Invalid input");
	return 0;
}
