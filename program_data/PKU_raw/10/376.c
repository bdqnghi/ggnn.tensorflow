void main()
{
	int n,i,j,m=0;
	int a[25],b[25]={1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
	scanf("%d",&n);
	for(i=0;i<n;i++) scanf("%d",&a[i]);
	b[n-1]=1;
	for(i=n-2;i>=0;i--)
	{
		for(j=i+1;j<n;j++)
		{
			if((a[i]>=a[j])&&(b[i]<=b[j])) b[i]=b[j]+1;
		}
	}
	for(i=0;i<n;i++)
	{
		if(b[i]>=m) m=b[i];
	}
	printf("%d\n",m);
}