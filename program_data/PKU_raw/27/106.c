int main()
{
	int n,i;
	double a,b,c,d,x1,x2,e,f;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%lf %lf %lf",&a,&b,&c);
		d=b*b-4*a*c;
		if(d>0)
		{
			x1=(sqrt(d)-b)/(2*a);
			x2=(-sqrt(d)-b)/(2*a);
			printf("x1=%.5lf;x2=%.5lf\n",x1,x2);
		}
		if(d==0)
		{
			x1=-b/(2*a);
			x2=-b/(2*a);
			printf("x1=x2=%.5lf\n",x1);
		}
		if(d<0)
		{
			e=sqrt(-d)/(2*a);
			f=-b/(2*a);
			printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n",f,e,f,e);
		}
	}
	return 0;
}
			


