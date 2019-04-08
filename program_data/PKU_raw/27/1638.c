int main()
{
	int n; 
	double a[100];
	double b[100];
	double c[100];
	double d,x1[100],x2[100],e,f;
	int j;
	scanf("%d",&n);
	for(j=0;j<n;j++)
	{
		scanf("%lf%lf%lf",&a[j],&b[j],&c[j]);
	}
	for (j=0;j<n;j++)         
	{	
		d=b[j]*b[j]-4*a[j]*c[j];
		if(d>0)
		{
			x1[j]=(-b[j]+sqrt(d))/(2*a[j]);
			x2[j]=(-b[j]-sqrt(d))/(2*a[j]);
			printf("x1=%.5lf;x2=%.5lf\n",x1[j],x2[j]);
		}
		else if (d==0)
		{
			x1[j]=x2[j]=-b[j]/(2*a[j]);
			printf("x1=x2=%.5lf\n",x1[j]);				
		}
			else
			{
				e=-b[j]/(2*a[j]);
				f=sqrt(-d)/(2*a[j]);
				printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n",e,f,e,f);
			}
	}
	return 0;
}

