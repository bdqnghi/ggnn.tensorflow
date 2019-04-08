void main()
{
	int row, col, n[100][100], i, j, k;
	scanf("%d%d", &row, &col);
	for (i = 0; i < row; i ++)
		for (j = 0; j < col; j ++)
			scanf("%d", &n[i][j]);
	for (i = 0; i <= col + row - 2; i ++)
		for (j = 0, k = i; j < row && k >=0; j ++, k --)
			if (k < col)	printf("%d\n", n[j][k]);
}