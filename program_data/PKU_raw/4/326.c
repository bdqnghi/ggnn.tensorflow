int main()
{
	int row,col,sum;
	scanf("%d %d",&row,&col);
	int a[100][100];
	int i,j;
	for(i=0;i<row;i++)
	{
		scanf("%d",&a[i][0]);
		for(j=1;j<col;j++)
		{
			scanf(" %d",&a[i][j]);
		}
	}
	for(sum=0;sum<(row+col-1);sum++)
	{
		for(i=0;i<=sum;i++)
		{
			if(i<row&&(sum-i)<col)
			{
			printf("%d\n",a[i][sum-i]);
			}
		}
	}
	return 0;
}
