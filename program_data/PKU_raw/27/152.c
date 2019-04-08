void main()
{
	int n,i=1;
	double a,b,c,x1,x2,d,e,y,z;
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		scanf("%lf %lf %lf",&a,&b,&c);
		d=b*b-4*a*c;
		if (d>0)
		{
			e=sqrt(d);
			x1=(-b+e)/(2*a);
			x2=(-b-e)/(2*a);
			printf("x1=%.5lf;x2=%.5lf\n",x1,x2);
		}
		if (d==0)
		{
			e=sqrt(d);
			x1=x2=(-b+e)/(2*a);
			printf("x1=x2=%.5lf\n",x1);
		}
		if (d<0)
		{
			y=-b/(2*a);
			z=sqrt(-d)/(2*a);
			printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n",y,z,y,z);
		}
	}
}
	