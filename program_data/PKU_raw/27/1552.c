
int main()
{
	int n,i;
	double a[100], b[100], c[100], x1[100], x2[100], under[100], real[100],unreal[100];
	scanf("%d", &n);
	for (i=0; i<n; i++)
	{
		scanf("%lf %lf %lf", &a[i], &b[i], &c[i]);
        under[i]=b[i]*b[i]-4*a[i]*c[i];
		if (under[i]>0)
		{
			x1[i]=(0-b[i]+sqrt(under[i]))/(2*a[i]);
			x2[i]=(0-b[i]-sqrt(under[i]))/(2*a[i]);
			
		}
		if (under[i]==0)
		{
			x1[i]=x2[i]=(-b[i]/(2*a[i]));
			
		}
		if (under[i]<0)
		{
			real[i]=(-b[i]/(2*a[i]));
			unreal[i]=sqrt(-under[i])/(2*a[i]);
		}
	}
	for(i=0; i<n; i++)
	{
	    if(under[i]>0)
			printf("x1=%.5lf;x2=%.5lf\n", x1[i], x2[i]);
		if(under[i]==0)
			printf("x1=x2=%.5lf\n", x1[i]);
		if(under[i]<0)
			printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n", real[i], unreal[i], real[i], unreal[i]);
	}

	return 0;
}