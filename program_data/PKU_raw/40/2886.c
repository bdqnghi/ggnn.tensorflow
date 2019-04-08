double cal(double a,double b,double c,double d,double ang);
int main()
{
	double a,b,c,d,ang;
	double x,area;
	scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&ang);
	ang/=2 ;
	ang = ang * PI /180;
	x=cal(a,b,c,d,ang);
	if(x<=0){
		printf("Invalid input");
	}else{
		area=sqrt(x);
		printf("%.4lf",area);
	}
	return 0;
}
double cal(double a,double b,double c,double d,double ang)
{
	double ans,s;
	s=(a+b+c+d)/2;
	ans=(s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(ang)*cos(ang);
	return ans;
}
