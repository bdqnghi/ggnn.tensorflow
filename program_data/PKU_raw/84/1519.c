int main()
{
	int n,i,e,j;
	scanf("%d",&n);
	int *sz=(int*)malloc(sizeof(int)*n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&sz[i]);
	}
	for(j=1;j<=2;j++)
	{
		for(i=0;i<n-j;i++)
		{
			if(sz[i]>sz[i+1])
			{
				e=sz[i];
				sz[i]=sz[i+1];
				sz[i+1]=e;
			}
		}
	}
	printf("%d\n%d",sz[n-1],sz[n-2]);
	return 0;
}
