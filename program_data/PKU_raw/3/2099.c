int main()
{
	int n,k;
	scanf("%d %d\n",&n,&k);
	int sz[1000];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&sz[i]);
	}
	int j,m;
	for(j=0;j<n;j++)
	{
		for(m=0;m<n;m++)
		{
			if(j==m)
				printf("");
			else if(sz[j]+sz[m]==k)
			{
				printf("yes");
				break;
			}
		}
		if(sz[j]+sz[m]==k)
		{
			break;
		}
	}
	if(j==n&& m==n)
	{
		printf("no");
	}
	return 0;
}