void main()
{   


	void S(double a,double b,double c,double d,double jiao);
	double a,b,c,d,jiao;
	scanf("%lf",&a);
    scanf("%lf",&b);
    scanf("%lf",&c);
    scanf("%lf",&d);
    scanf("%lf",&jiao);
    S(a,b,c,d,jiao);
	


}

   void S(double a,double b,double c,double d,double jiao)
   {    double PI,s,m;

        s = (a+b+c+d)/2;
        PI = 3.1415926;
		jiao=PI*jiao/360;
        m=cos(jiao);
		if(((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*m*m)<0)
		{
			printf("Invalid input");
		   
		}
		else
		{
           s=sqrt((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*m*m);
	      	printf("%.4lf",s);
		}
   }
