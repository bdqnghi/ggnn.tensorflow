int main()
{
	int array[110][110];
	int row, col;
	int rowup = 0, rowdown = 0, colleft = 0, colright = 0;

	cin >> row >> col;
	for (int i = 1; i <= row; i++)
	{
		for (int j = 1; j <= col; j++)
		{
			cin >> array[i][j];
		}
	}

	while (1)
	{
		for (int k = colleft + 1; k <= col - colright; k++)
		{
			cout << array[rowup + 1][k] << endl;
		}
		rowup++;
		if (rowup + rowdown >= row)
			break;

		for (int k = rowup + 1; k <= row - rowdown; k++)
		{
			cout << array[k][col - colright] << endl;
		}
		colright++;
		if (colright + colleft >= col)
			break;

		for (int k = col - colright; k >= colleft + 1; k--)
		{
			cout << array[row - rowdown][k] << endl;
		}
		rowdown++;
		if (rowup + rowdown >= row)
			break;

		for (int k = row - rowdown; k >= rowup + 1; k--)
		{
			cout << array[k][colleft + 1] << endl;
		}
		colleft++;
		if (colright + colleft >= col)
			break;
	}
	return 0;
}