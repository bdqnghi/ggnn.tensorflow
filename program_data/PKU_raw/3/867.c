int main()
{
	int n,k,sum;
	scanf("%d %d",&n,&k);
	int shu[NUM];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&(shu[i]));
	}
	for(int j=0;j<n;j++)
	{
		for(int l=n-1;l>j;l--)
		{
			sum=shu[j]+shu[l];
			if(sum==k)
			{
				printf("yes");
				break;
			}
		}
		if(sum==k)  break;
	}
	if(sum!=k)  printf("no");
	return 0;
}