int main()
{
	int height[25],amount[25]={0};
	int n,i,j,max;
	scanf("%d",&n);
	for(i=0;i<n-1;i++)
	{
		scanf("%d ",&height[i]);
	}
	scanf("%d",&height[n-1]);
	amount[n-1]=1;
	for(i=n-2;i>=0;i--)
	{
		max=0;
		for(j=i;j<n;j++)
		{
			if(amount[j]>max&&height[j]<=height[i])
			{
				max=amount[j];
			}
		}
		amount[i]=max+1;
	}
	for(i=0;i<n;i++)
	{
		if(amount[i]>max)
		{
			max=amount[i];
		}
	}
	printf("%d\n",max);
	return 0;
}