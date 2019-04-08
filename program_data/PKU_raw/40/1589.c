double s,a,b,c,d,angle;
int main()
{
	double area(double x,double y,double z,double w,double foot);
	scanf("%lf",&a);
	scanf("%lf",&b);
	scanf("%lf",&c);
	scanf("%lf",&d);
	scanf("%lf",&angle);
	if(area(a,b,c,d,angle)>=0)printf("%.4lf",area(a,b,c,d,angle));
	else printf("Invalid input");
}
double area(double x,double y,double z,double w,double foot)
{
	double AREA,s,num,PI=3.1415926;
	s=(x+y+z+w)/2;
	num=(s-x)*(s-y)*(s-z)*(s-w)-x*y*z*w*cos(foot/360*PI)*cos(foot/360*PI);
	if(num>=0)return(sqrt(num));
	else return(-1);
}