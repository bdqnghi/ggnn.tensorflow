int main()
{
	int n,i;
	float a[100],b[100],c[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%f%f%f",&a[i],&b[i],&c[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]!=0)
		{
			double delta,m,n,x1,x2;
			delta=b[i]*b[i]-4*a[i]*c[i];
		if(b[i]==0)
			m=-0;
		else
			m=-(b[i]/(2*a[i]));
		n=sqrt(fabs(delta))/(2*a[i]);
		if(delta==0)
		{
			printf("x1=x2=%.5lf\n",m);
		}
		else if(delta>0)
		{
			x1=m+n;
			x2=m-n;
			printf("x1=%.5lf;x2=%.5lf\n",x1,x2);
		}
		else if(delta<0&&b[i]==0)
		{
			m=-0.00000;
			printf("x1=%.5lf+%.5lfi;",m,n);
			printf("x2=%.5lf-%.5lfi\n",m,n);
		}
		else
		{
			printf("x1=%.5lf+%.5lfi;",m,n);
			printf("x2=%.5lf-%.5lfi\n",m,n);
		}
		}
	}
	return 0;
}
