void main()
{
	int n,i,j,k=0;
	double a[10],b[10],c[50],sum;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%lf%lf",&a[i],&b[i]);
	for(i=0;i<50;i++)
	{
			c[i]=0;
	}
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			c[k]=(a[i]-a[j])*(a[i]-a[j])+(b[i]-b[j])*(b[i]-b[j]);
			k++;
		}
	}
	
	sum=c[0];
	for(i=0;i<50;i++)
	{
			if(sum<c[i])  sum=c[i];
	}
	printf("%.4f\n",sqrt(sum));
}