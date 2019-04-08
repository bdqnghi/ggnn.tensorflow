int main()
{
	int n,i;
	double u[100],s[100],delta[100],x1[100],x2[100],a[100],b[100],c[100];
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf("%lf%lf%lf",&a[i],&b[i],&c[i]);
	}
	for (i=0;i<n;i++)
	{
		delta[i]=pow(b[i],2)-4*a[i]*c[i];
		if(delta[i]>0)
		{
			x1[i]=((0-b[i])+sqrt(delta[i]))/(2*a[i]);
			x2[i]=((0-b[i])-sqrt(delta[i]))/(2*a[i]);
			printf("x1=%.5lf;x2=%.5lf\n",x1[i],x2[i]);
		}
		else if(delta[i]==0)
		{
			x1[i]=(0-b[i])/(2*a[i]);
			printf("x1=x2=%.5lf\n",x1[i]);
		}
		else if(delta[i]<0)
		{
			u[i]=(0-b[i])/(2*a[i]);
			s[i]=sqrt(0-delta[i])/(2*a[i]);
			printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n",u[i],s[i],u[i],s[i]);
		}
	}
	return 0;
}