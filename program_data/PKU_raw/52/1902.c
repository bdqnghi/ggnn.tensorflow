int main()
{
	int n,m,chu[100],mu[100],i,j;
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)
	{
		scanf("%d",&chu[i]);
	}
	for(j=0;j<m;j++)
	{
		mu[j]=chu[j+n-m];
		if(j==0)
		{
			printf("%d",mu[j]);
		}
		else
		{
			printf(" %d",mu[j]);
		}
	}
	for(j=m;j<n;j++)
	{
		mu[j]=chu[j-m];
		printf(" %d",mu[j]);
	}
	return 0;
}