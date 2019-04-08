
const double pri=3.1415926;

double mianji(double a,double b,double c,double d,double x)
{
	double s,t;
	s=1.0/2*(a+b+c+d);
	x=x/360*pri;
	t=((s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(x)*cos(x));
	if (t<0) return 0;
	else return sqrt(t);
}
void main()
{
	double x,y,u,v,w;
	scanf("%lf%lf%lf%lf%lf",&x,&y,&u,&v,&w);
	if (mianji(x,y,u,v,w))
	   printf("%.4lf",mianji(x,y,u,v,w));
	else printf("Invalid input");
}
