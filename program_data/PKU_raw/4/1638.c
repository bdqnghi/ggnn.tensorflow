int main()
{
	int row, col, i, j, array[110][110]={0};
	scanf("%d%d", &row, &col);
	getchar();
	for(i=0;i<=row-1;i++)
	{
		for(j=0;j<=col-1;j++)
		{
			scanf("%d", &array[i][j]);
		}
	}
	for(i=0;i<=col+row-2;i++)
	{
		for(j=0;j<=i;j++)
		{
			if(j>=row || (i-j)>=col) continue;
			printf("%d\n", array[j][i-j]);
		}
	}
	return 0;
}