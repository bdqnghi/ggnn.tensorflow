int main()
{
	int n,m;
	int sz[300];
	scanf("%d",&n);
	scanf("%d",&(sz[0]));
	for(int i=1;i<n;i++)
	{
		scanf(" %d",&(sz[i]));
	}
	printf("%d",sz[0]);
	for(int j=1;j<n;j++)
	{
		for(m=0;m<j;m++)
		{
			
			if(sz[j]==sz[m])
				break;
		}
		if(sz[j]!=sz[j-1]&&m==j)
		{
			printf(",");
			printf("%d",sz[j]);
		}
	}
	return 0;
		
	}
