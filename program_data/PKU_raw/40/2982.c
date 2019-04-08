
double f(double a,double b,double c,double d,double r)
{
    double s,s1,s2,co;
    s=0.5*(a+b+c+d);
	r=r/180;
	r=r/2;
	r=r*PI;
	co=cos(r);
	s1=(s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*co*co;
	if(s1<0) return 0;
	s2=sqrt(s1);
    return (s2);
}
int main()
{
    double a,b,c,d,s1;
    double r,s;
    scanf("%lf %lf %lf %lf %lf",&a,&b,&c,&d,&r);
    s1=f(a,b,c,d,r);
    if(s1==0) printf("Invalid input");
    else
    printf("%.4f",s1);
}

