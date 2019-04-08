int main()
{
	int n,i,s[1000],k,j;
	i=0,j=0;
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++)
	{
		scanf("%d",&(s[i]));
	}
	for(i=0;i<n;i++)
	{
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