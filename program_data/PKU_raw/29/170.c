int main()
{
	int n,i,k,a[1000],b[1000],c[1000];
	double d[1000],sum[1000];
	b[0]=2;
	c[0]=1;
	b[1]=3;
	c[1]=2;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		sum[i]=0;
		for(k=0;k<a[i];k++)
		{
			if(k>=2)
			{
				b[k]=b[k-1]+b[k-2];
				c[k]=c[k-1]+c[k-2];
			}
			d[k]=b[k]/(double)(c[k]);
			sum[i]+=d[k];
		}
		printf("%.3f\n",sum[i]);
	}
	return 0;
}