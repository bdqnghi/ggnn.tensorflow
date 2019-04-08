int main()
{
	double a,b,c,d,s,x,S;
	scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&x);
	s = 1.0/2*(a+b+c+d);
	S=sqrt((s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*pow(cos((x/360)*3.1415926),2));
	if(S>0)
		printf("%.4lf\n",S);
else printf("Invalid input\n");

	return 0;
}
