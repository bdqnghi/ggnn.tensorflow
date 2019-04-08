 
int main()
{
	const double PI=3.1415926;
	double a,b,c,d,alpha,s,sum,radalpha,S;
	scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&alpha);
	a=(double)a;
	b=(double)b;
	c=(double)c;
	d=(double)d;
	alpha=(double)alpha;
	s=(a+b+c+d)/2;
	radalpha=alpha*PI/360.0;
	sum=(s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(radalpha)*cos(radalpha);
	if(sum<0)
		printf("Invalid input");
	else
		{
			S=sqrt(sum);
			printf("%.4f",S);
		}
	return 0;
}