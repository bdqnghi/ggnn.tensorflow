int main()
{
	int array[100][100], flag[100][100] = {{0}, {0}}, row, col, i, j, rowstart, colstart;
	cin >> row >> col;
	for (i = 1; i <= row; i++)
	{
		for (j = 1; j <= col; j++)
		{
			cin >> array[i][j];
			flag[i][j] = 1;
		}
	}
	rowstart = colstart = 1;
	do
	{
		for (i = colstart; i <= col; i++)
		{
			if (flag[rowstart][i] == 0 || array[rowstart][i] == 0)
			{
				break;
			}
			cout << array[rowstart][i] << endl;
			flag[rowstart][i] = 0;
		}
		rowstart++;
		for (i = rowstart; i <= row; i++)
		{
			if (flag[i][col] == 0 || array[i][col] == 0)
			{
				break;
			}
			cout << array[i][col] << endl;
			flag[i][col] = 0;
		}
		col--;
		for (i = col; i >= colstart; i--)
		{
			if (flag[row][i] == 0 || array[row][i] == 0)
			{
				break;
			}
			cout << array[row][i] << endl;
			flag[row][i] = 0;
		}
		row--;
		for (i = row; i >= rowstart; i--)
		{
			if (flag[i][colstart] == 0 || array[i][colstart] == 0)
			{
				break;
			}
			cout << array[i][colstart] << endl;
			flag[i][colstart] = 0;
		}
		colstart++;
		if (row == rowstart && col == colstart)
		{
			cout << array[row][col];
		}
	}while (row > rowstart || col > colstart);
	return 0;
}