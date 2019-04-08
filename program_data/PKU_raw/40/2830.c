double S(double a,double b,double c,double d,double m);
double max(double a,double b,double c,double d);
int main(int argc, char* argv[])
{
	double a,b,c,d,m,ans;
	scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&m);
	if(max(a,b,c,d)<(a+b+c+d)/2)
	{
		m=m*3.1415926/180/2;
		ans=S(a,b,c,d,m);
		printf("%.4lf",ans);
	}
	else printf("Invalid input");
	return 0;
}
double S(double a,double b,double c,double d,double m)
{
	double S=0;
	S=sqrt(((a+b+c+d)/2-a)*((a+b+c+d)/2-b)*((a+b+c+d)/2-c)*((a+b+c+d)/2-d)-a*b*c*d*cos(m)*cos(m));
	return S;
}
double max(double a,double b,double c,double d)
{
	if(a<b)
	{
		a=b;
	}
	if(c<d)
	{
		c=d;
	}
	if(a<c)
	{
		a=c;
	}
	return a;
}
