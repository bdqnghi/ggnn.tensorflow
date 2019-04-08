int main()
{
	int row, col;
	cin >> row >> col;
	int matrix[100][100];
	int i, j, u, v, n, s;
	for (i = 1; i <= row; i++)
	{
		for (j = 1; j <= col; j++)
		{
			cin >> matrix[i][j];
		}
	}
	if (row > col)
	{
		if (col % 2 == 0)
			n = col / 2;
		else
			n = col / 2 + 1;
	}
	else
	{
		if (row % 2 == 0)
			n = row / 2;
		else
			n = row / 2 + 1;
	}
	u = 1;
	v = 1;
	for (s = 1; s <= n; s++)
	{
		cout << matrix[u][v] << endl;
		for (i = 1; i <= col - 1; i++)
		{
			v++;
			cout << matrix[u][v] << endl;
		}
		for (i = 1; i <= row - 1; i++)
		{
			u++;
			cout << matrix[u][v] << endl;
		}
		if (row != 1)
		{
			for (i = 1; i <= col - 1; i++)
			{
				v--;
				cout << matrix[u][v] << endl;
			}
		}
		if (col != 1)
		{
			for (i = 1; i <= row - 2; i++)
			{
				u--;
				cout << matrix[u][v] << endl;
			}
		}
		v = v + 1;
		col = col - 2;
		row = row - 2;
	}
	return 0;
}