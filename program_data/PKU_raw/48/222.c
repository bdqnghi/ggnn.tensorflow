void change(int [][9]);
int main()
{
	int m, n, i, j;
	int matrix[9][9] = {0};
	cin >> m >> n;
	matrix[4][4] = m;
	for (i = 0; i < n; i++)
	{
		change(matrix);
	}
	for (i = 0; i < 9; i++)
	{
		cout << matrix[i][0];
		for (j = 1; j < 9; j++)
		{
			cout << ' ' << matrix[i][j];
		}
		cout << endl;
	}
	return 0;
}
void change(int matrix[9][9])
{
	int i, j;
	int plus[9][9] = {0};
	for (i = 0; i < 9; i++)
	{
		for (j = 0; j < 9; j++)
		{
			if (matrix[i][j] > 0)
			{
				plus[i][j] += matrix[i][j];
				plus[i - 1][j] += matrix[i][j];
				plus[i][j - 1] += matrix[i][j];
				plus[i + 1][j] += matrix[i][j];
				plus[i][j + 1] += matrix[i][j];
				plus[i - 1][j - 1] += matrix[i][j];
				plus[i - 1][j + 1] += matrix[i][j];
				plus[i + 1][j + 1] += matrix[i][j];
				plus[i + 1][j - 1] += matrix[i][j];
			}
		}
	}
	for (i = 0; i < 9; i++)
	{
		for (j = 0; j < 9; j++)
		{
			matrix[i][j] += plus[i][j];
		}
	}
}