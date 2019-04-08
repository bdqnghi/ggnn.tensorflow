void main()
{
	double a,b,c,d,m;
	double s,S,n,res;
	scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&m);
	s=(a+b+c+d)/2;
	n=m/2;
	res=cos(n/180*PI);//

	if(((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*res*res)<0)//
		printf("Invalid input");
	else 
	{
	    S=sqrt((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*res*res); 
		printf("%.4lf",S);
	}
}
