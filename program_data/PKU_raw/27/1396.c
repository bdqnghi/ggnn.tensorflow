int main()
{
	int n;
	scanf("%d",&n);
	int i;
	for(i=1;i<=n;i++)
	{
		double a,b,c;
		scanf("%lf%lf%lf",&a,&b,&c);
		double x1,x2;
		
		if(b*b-4*a*c>0)
		{
			x1 = (-b + sqrt(b*b-4*a*c))/(2*a);
            x2 = (-b - sqrt(b*b-4*a*c))/(2*a);
			printf("x1=%.5lf;x2=%.5lf\n",x1,x2);
		}
		if(b*b-4*a*c==0)
		{
			x1 = (-b + sqrt(b*b-4*a*c))/(2*a);
			printf("x1=x2=%.5lf\n",x1);
		}
		if(b*b-4*a*c<0)
		{
			double m,n;
			m=-b/(2*a);
			n=sqrt(-b*b+4*a*c)/(2*a);
			if(m==-0)
				m=0;
			printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n",m,n,m,n);
		}
	}
	return 0;
}




