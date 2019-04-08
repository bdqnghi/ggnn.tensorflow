void main()
{
	double f(double a,double b,double c,double d,double x);
	double a,b,c,d,x,S;
	scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&x);
    f(a,b,c,d,x);
}
   double f(double a,double b,double c,double d,double x)
   {
	   double y,s,S,PI=3.1415926;
       y=x/360*PI;
       s=(a+b+c+d)/2.0;
       S=(s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(y)*cos(y);
	   if(S<0)
		   printf("Invalid input");
	  else
       
		printf("%.4lf",sqrt(S));
	  
   }
