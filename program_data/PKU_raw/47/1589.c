int main()
{
	int n,i;
	scanf("%d",&n);
	int *sz=(int*)malloc(sizeof(int)*n);
	int *sf=(int*)malloc(sizeof(int)*n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&sz[i]);
		sf[n-1-i]=sz[i];
	}
	for(i=0;i<n;i++)
	{
		if(i<n-1)
		{
			printf("%d ",sf[i]);
		}
		if(i==n-1)
		{
			printf("%d",sf[i]);
		}
	}
	return 0;
}