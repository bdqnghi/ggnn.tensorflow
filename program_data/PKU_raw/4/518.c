int main()
{
	int row, col, array[99][99], i, j, k;
	cin >> row >> col;
	for (i = 0; i < row; i++)
		for (j = 0; j < col; j++)
			cin >> array[i][j];
	i = 0;
	j = 0;
	for (k = 0; k <= col -1; k++)
	{
		j = k;
		i = 0;
		do
		{
			cout << array[i][j] << endl;
			j = j - 1;
			i = k - j;
		}while(i != row && j != -1);
	}
	for (k = col; k <= col + row -2; k++)
	{
		j = col - 1;
		i = k - j;
		do
		{
			cout << array[i][j] << endl;
			j = j - 1;
			i = i + 1;
		}while(i != row && j != -1);
	}
	return 0;
}
