int main()
{
	double a,b,c,d,m,n,x,s,S,t;
	scanf("%lf",&a);
	scanf("%lf",&b);
	scanf("%lf",&c);
	scanf("%lf",&d);
	scanf("%lf",&m);
	x=m*pi/360;
	n=cos(x);
	s=(a+b+c+d)/2;
	t=(s-a)*(s-b)*(s-c)*(s-d);
	if((t-a*b*c*d*n*n)<0) 
		printf("Invalid input\n");
	else
	{
		S=sqrt(t-a*b*c*d*n*n);
	    printf("%.4lf",S);
	}
	    return 0;
}