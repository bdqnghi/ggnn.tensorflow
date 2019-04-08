
int main()
{
	int n,i;
	double a[100],b[100],c[100];
	double x1[100],x2[100];
	double s[100],t[100];
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf("%lf%lf%lf",&a[i],&b[i],&c[i]);
		if (b[i]*b[i]-4*a[i]*c[i]>0)
		{
			x1[i]=(-b[i] + sqrt(b[i]*b[i]-4*a[i]*c[i]))/(2*a[i]);
			x2[i]=(-b[i] - sqrt(b[i]*b[i]-4*a[i]*c[i]))/(2*a[i]);
			
		}
		if (b[i]*b[i]-4*a[i]*c[i]==0)
		{
			x1[i]=x2[i]=(-b[i])/(2*a[i]);
			
		}
		if (b[i]*b[i]-4*a[i]*c[i]<0)
		{
			s[i]=-b[i]/(2*a[i]);
			t[i]=(sqrt(-(b[i]*b[i]-4*a[i]*c[i])))/(2*a[i]);
			
		}
	}
	for (i=0;i<n;i++)
	{
		if (b[i]*b[i]-4*a[i]*c[i]>0)	
			printf("x1=%.5lf;x2=%.5lf\n",x1[i],x2[i]);
		if (b[i]*b[i]-4*a[i]*c[i]==0)
			printf("x1=x2=%.5lf\n",x1[i]);
		if (b[i]*b[i]-4*a[i]*c[i]<0)
			printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n",s[i],t[i],s[i],t[i]);
	}
	return 0;
}