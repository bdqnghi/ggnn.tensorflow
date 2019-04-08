void main()
{
	int n,j;
	double x1,x2,x3,x4;
	double a[10000],b[10000],c[10000];
	scanf("%d",&n);
	for(j=0;j<n;j++)
	{
		scanf("%lf%lf%lf",&a[j],&b[j],&c[j]);
	}
	for(j=0;j<n;j++)
	{
		if((b[j]*b[j]-4*a[j]*c[j])>0)
		{
			x1=(-b[j]+sqrt(b[j]*b[j]-4*a[j]*c[j]))/(2*a[j]);
			x2=(-b[j]-sqrt(b[j]*b[j]-4*a[j]*c[j]))/(2*a[j]);
			printf("x1=%.5lf;x2=%.5lf\n",x1,x2);
		}
		else if((b[j]*b[j]-4*a[j]*c[j])==0)
		{
			x1=-b[j]/(2*a[j]);
			//x2=-b[j]/(2*a[j]);
			printf("x1=x2=%.5lf\n",x1);
		}
		else
		{
			x3=-b[j]/(2*a[j]);
			x4=sqrt(-b[j]*b[j]+4*a[j]*c[j])/(2*a[j]);
			printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n",x3,x4,x3,x4);
		}
	}
}