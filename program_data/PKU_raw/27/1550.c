int main()
{
	int n;
	scanf("%d",&n);
	int j;
	float a[10],b[10],c[10];
	for(j=0;j<n;j++)
	{
		scanf("%f %f %f",&a[j],&b[j],&c[j]);
		double d;
		d=b[j]*b[j]-4*a[j]*c[j];
		if(d==0)
		{
			double e,f;
		    e=(-b[j])/(2*a[j]);
	    	f=(sqrt(d))/(2*a[j]);
		    if(e==0)
			e=0;
		    if(f==0)
			f=0;
			printf("x1=x2=%.5f\n",e);
		}
		else if(d>0)
		{
			double e,f;
		    e=(-b[j])/(2*a[j]);
	    	f=(sqrt(d))/(2*a[j]);
		    if(e==0)
			e=0;
		    if(f==0)
			f=0;
			printf("x1=%.5f;x2=%.5f\n",e+f,e-f);
		}
		else if(d<0)
		{
			double e,f;
		    e=(-b[j])/(2*a[j]);
	    	f=(sqrt(-d))/(2*a[j]);
		    if(e==0)
			e=0;
		    if(f==0)
			f=0;
			printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n",e,f,e,f);
		}
	}
	return 0;
}
