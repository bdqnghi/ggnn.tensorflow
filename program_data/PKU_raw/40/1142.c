void main()
{
	double a,b,c,d,x,s;
	scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&x);
    x=3.1415926*x/360;
	s=(a+b+c+d)/2;
	
    if((s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(x)*cos(x)<0)
		printf("Invalid input");
	else
	printf("%.4f",sqrt((s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(x)*cos(x)) );
}

	
  