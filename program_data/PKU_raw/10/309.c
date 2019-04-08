void main()
{
	int k;
	scanf("%d",&k);
	int a[25],i;
	for(i=0;i<=k-1;i++)
	{
		if(i==0)
			scanf("%d",&a[i]);
		else
			scanf(" %d",&a[i]);
	}
	int n[25];
	for(i=0;i<=24;i++)
		n[i]=1;
	n[k-1]=1;
	int j,m;
	for(j=k-2;j>=0;j--)
	{
		for(m=k-1;m>=j+1;m--)
		{
			
			if(a[m]<=a[j]&&n[m]>=n[j]-1)
				n[j]=n[m]+1;
		}
	}
	int max=0;
	for(i=0;i<k;i++)
	{
		if(max<n[i])
			max=n[i];
	}
	printf("%d",max);

}