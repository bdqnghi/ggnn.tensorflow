int main()
{
	int k,n,i,j,t;
	int sz[1000];
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++)
	{
		scanf("%d",&sz[i]);
	}
	for(i=0,t=1;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(sz[i]+sz[j]==k)
			{
				t=0;
				break;
			}
		}
	}
	if(t==0)
	{
	printf("yes");
	}
	else
	{
		printf("no");
	}
		return 0;
}
