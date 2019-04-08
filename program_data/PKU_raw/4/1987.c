int main()
{
	int row, col, array[101][101], i, j;
	cin >> row >> col;
	for (i = 0; i < row; i++)
		for (j = 0; j < col; j++)
			cin >> array[i][j];
	col--; row--;
	for (i = 0; i <= row + col; i++)
		for (j = 0; j <= i; j++)
			if (i - j <= col && j <= row)
				cout << array[j][i-j] << endl;
	return 0;
}