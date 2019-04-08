int main()
{
	int row, col, array[100][100], i, j, temp = 0;
	cin >> row >> col;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			cin >> array[i][j];
		}
	}
	while (temp < col)
	{
		j = temp;
		i = 0;
		while (i < row && j >= 0)
		{
			cout << array[i++][j--] << endl;
		}
		temp++;
	}
	if (row > 1)
	{
		temp = 1;
		while (temp < row)
		{
			j = col - 1;
			i = temp;
			while (i < row && j >= 0)
			{
				cout << array[i++][j--] << endl;
			}
			temp++;
		}
	}
	return 0;
}