double dt(double a,double b,double c)
{
	return(b*b-4*a*c);
}
double ba(double a,double b)
{
	return(-b/(2*a));
}
double gdt(double a,double dtt)
{
	return(sqrt(dtt)/(2*a));
}
double yu(double a,double b,double c)
{
	return(sqrt(fabs(-dt(a,b,c)/(4*a))));
}
void main()
{
	int n;
	double a,b,c;
	scanf("%d",&n);
	int i;
	double d;
	for(i=0;i<n;i++)
	{
		scanf("%lf%lf%lf",&a,&b,&c);
		if(ba(a,b)<1e-25&&ba(a,b)>-1e-25)
			d=0.0;
		else
			d=ba(a,b);
		if(dt(a,b,c)==0)
			printf("x1=x2=%.5lf\n",d);
		else if(dt(a,b,c)>0)
			printf("x1=%.5lf;x2=%.5lf\n",d+gdt(a,dt(a,b,c)),d-gdt(a,dt(a,b,c)));
		else if(dt(a,b,c)<0)
			printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n",d,yu(a,b,c)/sqrt(a),d,yu(a,b,c)/sqrt(a));
	}
}