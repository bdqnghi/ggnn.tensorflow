int main()
{
	int n,i,j,count[1000],high[1000],low[1000];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%d",&high[i],&low[i]);
	}
	for(i=0;i<n;i++)
	{
		count[i]=0;
		for(j=i;j<n;j++)
		{
			if(high[j]<=140&&high[j]>=90&&low[j]>=60&&low[j]<=90)
				count[i]++;
			else break;
		}
	}
	for(i=1;i<n;i++)
	{
		if(count[0]<count[i])
			count[0]=count[i];
	}
	printf("%d",count[0]);
	return 0;
}
