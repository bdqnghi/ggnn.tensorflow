
int main()
{
	int n=0;
	float a[10];
	float b[10];
	float c[10];
	double x1[10];
	double x2[10];
	int j;

    scanf("%d",&n);
	for(j=0;j<n;j++)
	{
		scanf("%f %f %f\n",&a[j],&b[j],&c[j]);
	}

	for(j=0;j<n;j++)
	{
		if((b[j]*b[j]-4*a[j]*c[j])>0)
		{
        x1[j]=(-b[j] + sqrt(b[j]*b[j]-4*a[j]*c[j]))/(2*a[j]);
		x2[j]=(-b[j] - sqrt(b[j]*b[j]-4*a[j]*c[j]))/(2*a[j]);
		printf("x1=%.5lf;x2=%.5lf\n",x1[j],x2[j]);
		}
		
		
		if((b[j]*b[j]-4*a[j]*c[j])==0)
		{
        x2[j]=(-b[j] + sqrt(b[j]*b[j]-4*a[j]*c[j]))/(2*a[j]);
		printf("x1=x2=%.5lf\n",x2[j]);
		}


		if((b[j]*b[j]-4*a[j]*c[j])<0) 
		{
			double m;
			double n;
			m=-b[j]/(2*a[j]);
			n=sqrt(4*a[j]*c[j]-b[j]*b[j])/(2*a[j]);
		printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n",m,n,m,n);
		}
	}
	return 0; 
}