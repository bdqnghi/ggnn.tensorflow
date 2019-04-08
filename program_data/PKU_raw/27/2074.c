void main()
{
	double a[32768],b[32768],c[32768];
	int n,i;
	double d,x1,x2,e;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
		scanf("%lf %lf %lf",&a[i],&b[i],&c[i]);
	for(i=1;i<=n;i++)
	{
		if (fabs(a[i])<1e-15)
			printf("Wrong\n");
		else 
		{
			d=b[i]*b[i]-4*a[i]*c[i];
			if (fabs(d)<1e-15)
			{
			         x1=-b[i]/(2*a[i]);
			         x2=-b[i]/(2*a[i]);
					 if (fabs(x1)<5e-6) x1=0;
				     if (fabs(x2)<5e-6) x2=0;
			         printf("x1=x2=%.5f\n",x1);
			}
			else if (d>=1e-15)
			{
				x1=(-b[i]+sqrt(d))/(2*a[i]);
				x2=(-b[i]-sqrt(d))/(2*a[i]);
				if (fabs(x1)<5e-6) x1=0;
				if (fabs(x2)<5e-6) x2=0;
				if(fabs(("%.5f",x1)-("%.5f",x2))<5e-6)
					printf("x1=x2=%.5f\n",x1); 
				else printf("x1=%.5f;x2=%.5f\n",x1,x2);
			}
			else
			{
				x1=-b[i]/(2*a[i]);
			    x2=-b[i]/(2*a[i]);
				if (fabs(x1)<5e-6) x1=0;
				if (fabs(x2)<5e-6) x2=0;
				e=sqrt(-d)/(2*a[i]);
				if (fabs(e)<5e-6) printf("x1=x2=%.5f\n",x1);
				else
					printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n",x1,e,x2,e);
			}
		}
	}
}