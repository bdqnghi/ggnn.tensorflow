int main()
{
	double a,b,c,d,s=0.00,n=0.00,m=0.00,j=0.00,k=0.00;
	scanf("%lf\n",&a);
	scanf("%lf\n",&b);
	scanf("%lf\n",&c);
	scanf("%lf\n",&d);
	scanf("%lf",&m);
	s=(a+b+c+d)/2;
    k=cos(m*3.1415926/360)*cos(m*3.1415926/360);
	n=(s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*k;
	if(n<0)
		printf("Invalid input");
	else
	{j=sqrt(n);
	printf("%.4f",j);}
	return 0;
}
