int main()
{
	int n,i;
	double j,k,p;
	double a[100];
	double b[100];
	double c[100];
	double x1[100],x2[100],d[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%lf%lf%lf",&a[i],&b[i],&c[i]);
	}
	for(i=0;i<n;i++)
	{
		p=-b[i]/(2*a[i]);
		if(p==-0.00000)
		{
            p=0.00000;
		}
		d[i]=b[i]*b[i]-4*a[i]*c[i];
		if(d[i]==0)
		{
			x1[i]=x2[i]=-b[i]/(2*a[i]);
			printf("x1=x2=%.5lf\n",x1[i]);
		}
		if(d[i]>0)
		{
			x1[i]=(-b[i]+sqrt(b[i]*b[i]-4*a[i]*c[i]))/(2*a[i]);
			x2[i]=(-b[i]-sqrt(b[i]*b[i]-4*a[i]*c[i]))/(2*a[i]);
            printf("x1=%.5lf;x2=%.5lf\n",x1[i],x2[i]);
		}
		if(d[i]<0)
		{
			j=p;
			k=sqrt(4*a[i]*c[i]-b[i]*b[i])/(2*a[i]);
			printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n",j,k,j,k);
		}
	}
}
