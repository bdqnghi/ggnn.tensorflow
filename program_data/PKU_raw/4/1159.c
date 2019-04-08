int main()
{
	int row, col;
	int a[100][100];
	
	cin >> row >> col;
	for (int i = 1; i <= row; i++)
		for (int j = 1; j <= col; j++)
			cin >> a[i][j];
	for (int i = 2; i <= col + row; i++)
		for (int j = 1; j <= i - 1; j++)
		{
			if (i - j > col) continue;
			if (j > row) continue;
			cout << a[j][i - j] << endl;
		}
	return 0;
}