
int main()
{
	int a[8][8] = {-1};
	int row, col;
	int i, j, k;
	int max;
	int maxRow, maxCol;
	int flag = 0;
	int result = 0;

	scanf("%d,%d", &row, &col);

	for(i = 0; i < row; i++)
	{
		for(j = 0; j < col; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}

	for(i = 0; i < row; i++)
	{
		max = a[i][0];
		for(j = 0; j < col; j++)
		{
			if(max <= a[i][j])
			{
				max = a[i][j];
				maxCol = j;
			}
		}
		flag = 1;
		for(k = 0; k < row; k++)
		{
			if(max > a[k][maxCol])
			{
				flag = 0;
			}
		}
		if(flag == 1)
		{
			result = 1;
			printf("%d+%d\n",i,maxCol);
		}
	}
	if(result == 0)
	{
		printf("No");
	}

	return 0;
}