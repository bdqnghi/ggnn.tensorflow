int main()
{
	int row, col;
	cin >> row >> col;
	int matrix[100][100];
	int i, j, k, x, a, b;
	for (i = 1; i <= row; i++)
		for (j = 1; j <= col; j++)
		{
			cin >> matrix[i][j];
		}
	for (k = 2; k <= row + col; k++)
	{
		a = k > col + 1? k-col:1;
		b = k > row + 1? row+1:k;
		for (x = a; x < b; x++)
		{
			cout << matrix[x][k-x] << endl;
		}
	}
	return 0;
}