void main()
{
	int n,i;
	double a[100],b[100],c[100],x1,x2;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%lf%lf%lf",&a[i],&b[i],&c[i]);
	}
	for(i=0;i<n;i++)
	{
		if(b[i]*b[i]-4*a[i]*c[i]>0)
		{
			x1=(-b[i]+sqrt(b[i]*b[i]-4*a[i]*c[i]))/(2*a[i]);
			x2=(-b[i]-sqrt(b[i]*b[i]-4*a[i]*c[i]))/(2*a[i]);
			printf("x1=%.5lf;x2=%.5lf\n",x1,x2);
		}
		else if(b[i]*b[i]-4*a[i]*c[i]==0)
		{
			x1=x2=(-b[i])/(2*a[i]);
			printf("x1=x2=%.5lf\n",x1);
		}
		else
		{
			x1=(-b[i])/(2*a[i]);
			x2=sqrt(-b[i]*b[i]+4*a[i]*c[i])/(2*a[i]);
			printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n",x1,x2,x1,x2);
		}
	}
}
