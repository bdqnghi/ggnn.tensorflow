void main()
{
	double x1[32768],x2[32768],xi[32768],a,b,c,t;
	int n,i;
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		scanf("%lf %lf %lf",&a,&b,&c);
		t=b*b-4*a*c;
		if (t>=0)
		{
		x1[i]=(-b+sqrt(t))/(2*a);
	    x2[i]=(-b-sqrt(t))/(2*a);
		if(fabs(x1[i])<1e-6) x1[i]=0;
		if(fabs(x2[i])<1e-6) x2[i]=0;
		}
		else if(t<0)
		{
			x1[i]=x2[i]=-b/(2*a);
			if(fabs(x1[i])<1e-6) x1[i]=x2[i]=0;
			xi[i]=sqrt(-t)/(2*a);
		}
	}
	for (i=1;i<=n;i++)
	{
		if(fabs(xi[i])<=1e-6)
		{
			if(x1[i]==x2[i]) printf("x1=x2=%.5f\n",x1[i],x2[i]);
				else printf("x1=%.5f;x2=%.5f\n",x1[i],x2[i]);
		}
		else printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n",x1[i],xi[i],x2[i],xi[i]);
	}
}