void main()
{
	int n,i,j,k=0;
	double a[20],b[20],c[100],d=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%lf%lf",&a[i],&b[i]);
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			c[k]=sqrt((a[i]-a[j])*(a[i]-a[j])+(b[i]-b[j])*(b[i]-b[j]));
			if(c[k]>d) d=c[k];
			k++;
		}
	}
	printf("%.4lf\n",d);
}