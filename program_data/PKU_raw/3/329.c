int main()
{
	int n,k,sz[1000],i,j;
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
				break;
		}
		if(sz[i]+sz[j]==k)
				break;
	}
	if(sz[i]+sz[j]==k)
	    printf("yes");
	else
		printf("no");
	return 0;
}
