int main()
{
	int sz[101];
	int n;
	scanf("%d\n",&n);
    int e;
	for(int m=0;m<n;m++)
	{
		scanf("%d\n",&sz[m]);
	}
	for(int k=0;k<n;k++)
	{
		for(int i=0;i<n-1;i++)
		{
			if(sz[i]<sz[i+1])
			{
				e=sz[i+1];
				sz[i+1]=sz[i];
				sz[i]=e;
			}
		}
	}
	printf("%d\n%d",sz[0],sz[1]);
	return 0;
}
