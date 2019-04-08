
int main()
{
	int row, col;
	cin >> row >> col;
	int a[100][100];
	int i, j;
	for (i = 0; i < row; i++)
		for (j = 0; j < col; j++)
			cin >> a[i][j];
	for (i = 0; i < col; i++)
		for (j = 0; j <= i; j++)
		{
			if (j < row)
			cout << a[j][i - j] << endl;
		}
	for (i = 1; i < row; i++)
		for (j = i; j < col + i; j++)
		{
			if (j < row)
			cout << a[j][col + i - j - 1] << endl;
		}

	return 0;
}