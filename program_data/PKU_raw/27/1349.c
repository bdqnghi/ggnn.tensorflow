
double fangcheng(double a,double b,double c)
{
	double d,x1,x2,m,n;
	d=b*b-4*a*c;
	if(d>0)
	{
		x1=(-b+sqrt(d))/(2*a);
		x2=(-b-sqrt(d))/(2*a);
		printf("x1=%.5lf;x2=%.5lf\n",x1,x2);
	}
	else if (d==0)
	{
		x1=-b/(2*a);
		x2=-b/(2*a);
		printf("x1=x2=%.5lf\n",x1);
	}
	else if (d<0)
	{
		m=-b/(2*a);
		n=sqrt(-d)/(2*a);
		if(m==-0)
		{
			m=0;
		}
		printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n",m,n,m,n);
	}
	return 0;
}
int main()
{
	int n;
	scanf("%d",&n);
	while(n>0) 
	{
     double a,b,c;
	  scanf("%lf%lf%lf",&a,&b,&c);
      n=n-1;
	  fangcheng (a,b,c);
	}
	return 0;
}