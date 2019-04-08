int main()
{
	int m,n,i,j;
	int q=0;
	int sz[100][100];
	scanf("%d,%d",&m,&n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&sz[i][j]);
		}
	}
	for(i=0;i<m;i++)
	{
		int max=sz[i][0];
		int k=0;
		for(j=1;j<n;j++)
		{
			if(sz[i][j]>max)
			{
				max=sz[i][j];
				k=j;
			}
		}
		int min=sz[0][k];
		for(int s=1;s<m;s++)
		{
			if(sz[s][k]<min)
			{
				min=sz[s][k];
			}
		}
		if(max==min)
		{
			printf("%d+%d",i,k);
		    q=1;
		}
	}
 
	if(q==0)
	{
		printf("No");
	}
	return 0;
}
