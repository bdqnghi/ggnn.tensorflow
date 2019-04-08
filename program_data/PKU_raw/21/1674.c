void main()
{
	int m,n,i,a[301],sum,max,min;
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	sum=0;max=a[0];min=a[0];
	for (i=0;i<n;i++)
	{
		sum+=a[i];
		if (a[i]>max) max=a[i];
		if (a[i]<min) min=a[i];
	}
	max*=n;min*=n;
	if ((max-sum)>(sum-min)) printf("%d",max/n);
	if ((max-sum)<(sum-min)) printf("%d",min/n);
	if ((max-sum)==(sum-min)) printf("%d,%d",min/n,max/n);
}