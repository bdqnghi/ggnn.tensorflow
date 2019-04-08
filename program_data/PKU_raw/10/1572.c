int main()
{
	int sum[100]={0},a[100];
	int n,i,j,max=0;
	scanf("%d",&n);
	for (i=0;i<n;i++) scanf("%d",&a[i]);
	for (i=n-1;i>=0;i--)
	{
		if(i==n-1) sum[i]=1;
		else 
		{
			for(j=i+1;j<=n-1;j++)
				if (a[j]<=a[i]) 
				{
					if(sum[j]>max) max=sum[j];
				}
			sum[i]=++max;
			max=0;
		}
	}
	max=0;
	for(i=0;i<=n-1;i++)
		if (sum[i]>max) max=sum[i];
	printf("%d",max);
	return 0;
}
