int main(int argc, char* argv[])
{
	int m,n,i,j;
	int high[80][80];
	scanf("%d%d",&m,&n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&high[i][j]);
		}
	}
	
	//???
	i=0;
	j=0;
	if((high[0][0]>=high[0][1])&&(high[0][0]>=high[1][0]))
		printf("%d %d\n",i,j);
	for(j=1;j<n-1;j++)
	{
		if((high[0][j]>=high[0][j-1])&&(high[0][j]>=high[0][j+1])&&(high[0][j]>=high[1][j]))
			printf("%d %d\n",i,j);
	}
	j=n-1;
	if ((high[0][j]>high[0][j-1])&&(high[0][j]>=high[1][j]))
		printf("%d %d\n",i,j);

	//????
	for(i=1;i<=m-2;i++)
	{
		j=0;
		
		if((high[i][0]>=high[i][1])&&(high[i][0]>=high[i+1][0])&&(high[i][0]>=high[i-1][0]))
			printf("%d %d\n",i,j);
		
		for(j=1;j<n-1;j++)
		{
			if((high[i][j]>=high[i][j-1])&&(high[i][j]>=high[i][j+1])&&(high[i][j]>=high[i-1][j])&&(high[i][j]>=high[i+1][j]))
				printf("%d %d\n",i,j);
		}
		j=n-1;
		
			if ((high[i][j]>high[i][j-1])&&(high[i][j]>=high[i-1][j])&&(high[i][j]>=high[i+1][j]))
				printf("%d %d\n",i,j);

		
	}

	//????
	i=m-1;
	j=0;
	if((high[i][0]>=high[i][1])&&(high[i][0]>=high[i-1][0]))
		printf("%d %d\n",i,j);
	for(j=1;j<=n-2;j++)
	{
		if((high[i][j]>=high[i][j-1])&&(high[i][j]>=high[i][j+1])&&(high[i][j]>=high[i-1][j]))
			printf("%d %d\n",i,j);
	}
	j=n-1;
	if ((high[i][j]>=high[i][j-1])&&(high[i][j]>=high[i-1][j]))
		printf("%d %d\n",i,j);
	return 0;
}
