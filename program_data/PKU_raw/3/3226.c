int main()
{
	int n,k,s[1000],i,j;
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++)
	{
		scanf("%d",&s[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<i;j++)
		{
			if(s[i]+s[j]==k)
			{
				printf("yes");
				return 0;
			}
		}
		for(j=i+1;j<n;j++)
		{
			if(s[i]+s[j]==k)
			{
				printf("yes");
				return 0;
			}
		}
	}
	printf("no");
	return 0;
}
