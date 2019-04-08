int main(int argc, char* argv[])
{
	int n,i;
	double a[100],b[100],c[100];
	double x1[100],x2[100];
	double d,e,f;
	scanf ("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf("%lf%lf%lf",&a[i],&b[i],&c[i]);
		d=(-1)*b[i]/(2*a[i]);
		e=b[i]*b[i]-4*a[i]*c[i];
		if (e>0)
		{
			x1[i]=d+sqrt(e)/(2*a[i]);
			x2[i]=d-sqrt(e)/(2*a[i]);
		    printf("x1=%.5lf;x2=%.5lf\n",x1[i],x2[i]);
        }
	    if(e==0)
		{
			x1[i]=d;
			x2[i]=d;
			printf("x1=x2=%.5lf\n",x1[i]);
		}
		if (e<0)
		{
			e=(-1)*e;
			f=sqrt(e)/(2*a[i]);
			printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n",d,f,d,f);
		}
	}
	return 0;
}