int main()
{
	double a,b,c,d;
	double e,f,g,h,j;
	int n,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%lf %lf %lf",&a,&b,&c);
		d=b*b-4*a*c;
		e=-b/(2*a);
		f=0-e;
		g=sqrt(4*a*c-b*b)/(2*a);
		h=(-b+sqrt(b*b-4*a*c))/(2*a);
		j=(-b-sqrt(b*b-4*a*c))/(2*a);
		if(d==0.0)
			printf("x1=x2=%.5lf\n",e);
		if(d<0.0&&b!=0)
			printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n",e,g,e,g);
		if(d<0.0&&b==0)
			printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n",f,g,f,g);

		if(d>0.0)
			printf("x1=%.5lf;x2=%.5lf\n",h,j);
	}
	return 0;
}