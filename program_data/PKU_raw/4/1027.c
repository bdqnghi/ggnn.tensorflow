int main()
{
	int a[100][100];
	int i,j;
	int row,col;
	scanf("%d%d",&row,&col);
	for(i=1;i<=row;i++)
	{
		for(j=1;j<=col;j++)
		{
			scanf("%d",&a[i-1][j-1]);
		}
	}
	int sum;
	for(sum=2;sum<=(col+row);sum++)
	{
		if(sum<=col+1)
		{
			for(i=1,j=sum-1;i<sum&&i<=row&&j<=col;i++,j--)
			{
				printf("%d\n",a[i-1][j-1]);
			}
		}
		else
		{
			for(i=sum-col,j=sum-i;i<sum&&i<=row&&j<=col;i++,j--)
			{
				printf("%d\n",a[i-1][j-1]);
			}
		}
	}

	return 0;
}