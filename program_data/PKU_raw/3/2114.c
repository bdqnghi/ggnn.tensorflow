int main()
{
	int sz[1000],n,k,i,j,sum;
	scanf("%d %d", &n, &k);
	for(i=0;i<n;i++)
	{
		scanf("%d", &sz[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			sum=sz[i]+sz[j];
			if(sum==k)
			{
				printf("yes");
				scanf(" ");
				return 0;
			}
		}
		if(sum==k)
		{
			break;
		}
	}
	printf("no");
	scanf(" ");
	return 0;
}
