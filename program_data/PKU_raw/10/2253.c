void main()
{
	int n,h[25],d[25],i,j,max;
	scanf("%d",&n);
	for(i=0;i<n;i++) scanf("%d",&h[i]);
	d[n-1]=1;
	for(i=n-2;i>=0;i--)
	{
		d[i]=1;
		for(j=i+1;j<n;j++)
		{
			if(d[j]+1>d[i]&&h[j]<=h[i]) d[i]=d[j]+1;
		}
	}
	max=d[0];
	for(i=0;i<n;i++)
	{
		if(d[i]>max) max=d[i];
	}
	printf("%d",max);
}