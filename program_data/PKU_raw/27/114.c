void main()
{
	float a,b,c;
	double x1,x2,t,p,q;
	int i,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%f %f %f",&a,&b,&c);
		t=b*b-4*a*c;
		p=-b/(2*a);
		if (t<0)
		{
			q=sqrt(-t)/(2*a);
			printf("x1=%.5lf+%.5lfi;",p,q);
			printf("x2=%.5lf-%.5lfi\n",p,q);
		}
		else
		{
			q=sqrt(t)/(2*a);
			x1=p+q;
			x2=p-q;
			if (x1==x2) printf("x1=x2=%.5lf\n",x1);
			else printf("x1=%.5lf;x2=%.5lf\n",x1,x2);
		};
	};
}
