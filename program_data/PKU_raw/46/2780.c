int main()
{
	int array[101][101], pos[101][101] = {0};
	int row, col, i, j, count = 0, n;
	cin >> row >> col;
	n = row * col;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			cin >> array[i][j];
			pos[i][j] = 1;
		}
	}
	i = 0;
	j = 0;
	while (1)
	{
		while (pos[i][j+1] != 0)
		{
			cout << array[i][j] << endl;
			pos[i][j] = 0;
			j++;
			count++;
		}
		if (count == n - 1) break;
		while (pos[i+1][j] != 0)
		{
			cout << array[i][j] << endl;
			pos[i][j] = 0;
			i++;
			count++;
		}
		if (count == n - 1) break;
		while (j >= 0 && pos[i][j-1] != 0)
		{
			cout << array[i][j] << endl;
			pos[i][j] = 0;
			j--;
			count++;
		}
		if (count == n - 1) break;
		while (i >= 0 && pos[i-1][j] != 0)
		{
			cout << array[i][j] << endl;
			pos[i][j] = 0;
			i--;
			count++;
		}
		if (count == n - 1) break;
	}
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (pos[i][j] == 1)
			{
				cout << array[i][j] << endl;
			}
		}
	}
	return 0;
}