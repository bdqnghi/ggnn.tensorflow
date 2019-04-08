
int main()
{
	int n,k,i,j;
	int sz[1000];
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++)
	{
		scanf("%d",&sz[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(sz[i]+sz[j]==k)
			{
				printf("yes");
				break;
			}
		}
		if(j!=n)
			break;
	}
	if(i==n)
		printf("no");
	return 0;
}