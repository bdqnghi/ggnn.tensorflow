


int main()
{
	int n;
	scanf("%d",&n);
	int sz[99],zs[99];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&(sz[i]));
		zs[n-i-1]=sz[i];
	}
	for(int j=0;j<(n-1);j++)
	{
		printf("%d ",(zs[j]));
	}
	printf("%d",(zs[n-1]));
	return 0;
}
