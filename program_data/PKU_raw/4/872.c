
int main()
{
	int a[101][101], row, col, i, j, k, sum;
	cin >> row >> col;
	sum = row + col;
	for (i = 1; i <= row; i++)
		for (j = 1; j <= col; j++)
			cin >> a[i][j];
	for (k = 2; k <= sum ; k++)
	{
		if (k  <= col + 1)
		{
			i = 1; 
			j = k - 1;
			do
			{
				cout << a[i][j] << endl;;
				i += 1;
				j -= 1;
			}
			while (i <= row && j >= 1);
		}
		else
		{
			i = k - col;
			j = k - i;
			do
			{
				cout << a[i][j] << endl;
				i += 1;
				j -= 1;
			}
			while (i <= row && j >= 1);
		}
	}

	return 0;
}

