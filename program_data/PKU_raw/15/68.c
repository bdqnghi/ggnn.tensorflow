int main()
{
	int N,M;
	scanf("%d",&N);
	M=N;
	
	//int n;
	//scanf ("%d",&n);
	int k[50][50];
	int i,j,y=0;
	int sum=0;
	for (i=0;i<N;i++)
	{
		for (j=0;j<M;j++)
		{
			scanf ("%d",&k[i][j]);
		}
	}
		
	for (i=0;i<N;i++)
	{
		for (j=0;j<M;j++)
		{
			if(k[i][j]==0)
			{
				sum++;
			}
		
		}
	}
	y=(sum/4-1)*(sum/4-1);
	printf("%d",y);
	return 0;

}