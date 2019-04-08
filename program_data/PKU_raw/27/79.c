
void main()
{
	int n,i;
	double p,q,re,im,x1,x2,a,b,c;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%lf %lf %lf",&a,&b,&c);
		p=2*a;q=sqrt(b*b-4*a*c);
		if(fabs(q)<=1e-6)
		{
			x1=-b/(2*a);
			printf("x1=x2=%.5lf\n",x1);
		}
		else if(q>1e-6)
		{
			x1=(-b+q)/p;x2=(-b-q)/p;
			printf("x1=%.5lf;x2=%.5lf\n",x1,x2);
		}
		else
		{
			re=-b/p;im=sqrt(-b*b+4*a*c)/p;
			printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n",re,im,re,im);
		}
	}
}