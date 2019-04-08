double square(double a,double b,double c,double d,double angel)
{
	double ans,s;
	s=(a+b+c+d)/2;
	ans=sqrt((s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(angel)*cos(angel));
	return(ans);
}
void main()
{
	double square(double,double,double,double,double);
	double a,b,c,d,angel,ans,s;
	scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&angel);
	s=(a+b+c+d)/2;
	angel=angel*PI/360;
	if((s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(angel)*cos(angel)<0)
		printf("Invalid input");
	else
	{
		ans=square(a,b,c,d,angel);
	    printf("%.4f",ans);
	}
}