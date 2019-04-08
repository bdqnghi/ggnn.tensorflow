void main()
{
	int a[100]={0},i,n,k1=0,k2=0;
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
		scanf("%d",&a[i]);
	for(i=0;i<=n-1;i++)
	{
		if(a[i]>k1)
			k2=k1,k1=a[i];
		else if(a[i]<=k1&&a[i]>=k2)
			k2=a[i];
	}
	printf("%d\n%d\n",k1,k2);
}
