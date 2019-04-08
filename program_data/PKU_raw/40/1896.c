double area(double a,double b,double c ,double d,double e );
int main()
{
	double a,b,c,d,e;
	scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e);
	if(area(a,b,c,d,e)==-1)
	{
		printf("Invalid input");
	}
	else
	{
		printf("%.4lf",area(a,b,c,d,e));
	}
}
double area(double a,double b,double c ,double d,double e )
{
	double S,s,x,y;
	s=(a+b+c+d)/2.0;
	y=e*3.1415926/360.0;
	x=(s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(y)*cos(y);
	if (x>=0)
	{
		S=sqrt(x);
		return S;
	}
	else 
	{
		return(-1);
	}
		
	
	
}
