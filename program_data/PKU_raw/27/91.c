void main()
{
	int n,i;
	double p,q,t,x1,x2,a,b,c;
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf("%lf %lf %lf",&a,&b,&c);
		p=-b/(2*a);
		t=b*b-4*a*c;

		if (t>0)
		{
			q=sqrt(b*b-4*a*c)/(2*a);
			x1=p+q;
			x2=p-q;
			printf("x1=%.5lf;x2=%.5lf\n",x1,x2);
		}
		else if (t==0)
		{
		printf("x1=x2=%.5lf\n",p);
		}
		else if (t<0)
		{
			q=sqrt(-b*b+4*a*c)/(2*a);
			printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n",p,q,p,q);
		}
	}
}

		







