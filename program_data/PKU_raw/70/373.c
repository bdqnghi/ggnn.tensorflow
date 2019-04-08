double max(double a[],int k)
{
	int i;
	double maxdis=a[0];
	for(i=1;i<k;i++)
	{
		if(maxdis<a[i])
			maxdis=a[i];
	}
	return (maxdis);
}
void main()
{
	double n,x[10],y[10],dis[100];
	int i,j,k=0;

	scanf("%lf",&n);
	for(i=0;i<n;i++)
	{
		scanf("%lf%lf",&x[i],&y[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			dis[k]=sqrt(pow(x[i]-x[j],2)+pow(y[i]-y[j],2));
			k++;
		}
	}
	printf("%.4lf",max(dis,k));
}