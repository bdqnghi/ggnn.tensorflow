int main()
{
	int n,i,a[100],k,c[100],d[100];
	double b[100],e[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	c[0]=1;
	d[0]=1;
	for(k=0;k<n;k++)
	{
		b[k]=0;
		for(i=1;i<=a[k];i++)
		{
			c[i]=c[i-1]+d[i-1];
			d[i]=c[i-1];
			e[i]=(double)c[i]/d[i];
			b[k]=b[k]+e[i];
		}
		printf("%.3lf\n",b[k]);
	}
	return 0;
}
