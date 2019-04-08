int main(int argc, char* argv[])
{
    int i,n;
	double a[100],b[100],c[100];
	double k;
	scanf("%d",&n);
	double x1,x2;
	double f;
    for(i=0;i<n;i++)
	{
    scanf("%lf %lf %lf",&a[i],&b[i],&c[i]);
    }
	for(i=0;i<n;i++)
	{
	    f=-(b[i]/2/a[i]);
		double j=sqrt(b[i]*b[i]-4*a[i]*c[i])/(2*a[i]);
		if(b[i]!=0)
		{
			if(b[i]*b[i]-4*a[i]*c[i]>0)
			{
                x1=f+j;
				x2=f-j;
				printf("x1=%.5lf;x2=%.5lf\n",x1,x2);
			}
			if(b[i]*b[i]-4*a[i]*c[i]<0)
			{
				k=sqrt(-b[i]*b[i]+4*a[i]*c[i])/(2*a[i]);
				printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n",f,k,f,k);
			}
			if(b[i]*b[i]-4*a[i]*c[i]==0)
            {
				x1=f;
				x2=f;
				printf("x1=x2=%.5lf\n",f,f);
			}
		}
        if(b[i]==0)
        {
            if(b[i]*b[i]-4*a[i]*c[i]>0)
			{
			    x1=j;
		        x2=-j;
                printf("x1=0.00000+%.5lf;x2=0.00000+%.5lf\n",x1,x2);
			}
            if(b[i]*b[i]-4*a[i]*c[i]<0)
			{
                k=sqrt(4*a[i]*c[i])/(2*a[i]); 
                printf("x1=0.00000+%.5lfi;x2=0.00000-%.5lfi\n",k,k);
			}
            	if(-4*a[i]*c[i]==0)
			{
				x1=f;
				x2=f;
				printf("x1=x2=0.00000\n");
			}
		}
		}
	return 0;
}
