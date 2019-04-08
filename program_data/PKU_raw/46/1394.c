
int main()
{
	int sz[100][100],i,j,row,k,col;
	scanf("%d %d",&row,&col);
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",&sz[i][j]);
		}
	}
	for(i=0;i<row-1-i&&i<col-1-i;i++)
	{
		for(j=i;j<col-1-i;j++)
			printf("%d\n",sz[i][j]);
		for(j=i;j<row-1-i;j++)
			printf("%d\n",sz[j][col-1-i]);
		for(j=col-1-i;j>i;j--)
			printf("%d\n",sz[row-1-i][j]);
		for(j=row-1-i;j>i;j--)
			printf("%d\n",sz[j][i]);
	}
	if(i==row-i-1&&i==col-i-1)
		printf("%d\n",sz[i][i]);
	if(i==row-1-i&&i<col-i-1)
	{
		for(k=i;k<col-i;k++)
			printf("%d\n",sz[i][k]);
	}
	if(i<row-1-i&&i==col-1-i)
	{
		for(k=i;k<row-i;k++)
			printf("%d\n",sz[k][i]);
	}
	return 0;
}