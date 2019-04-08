int main()
{
	int array[100][100], a, b, p, q, i, j, k = 1, x = 1;
	cin >> a >> b;
	for (i = 0; i <= a - 1; i++)
	{
		for (j = 0; j <= b - 1; j++)
		{
			cin >> array[i][j];
		}
	}
	for (q = 0, p = b - 1; p >= 0, q <= a - 1; p--, q++)
	{

		for (i = b - 1 - p; i <= p; i++)
		{
			if (array[q][i] == -1)
			{
				break; k = 0;
			}
			cout << array[q][i] << endl << endl;
			array[q][i] = -1;
		}
		for (i = q + 1; i <= a - 1 - q; i++)
		{
			if (array[i][p] == -1)
			{
				break; k = 0;
			}
			cout << array[i][p] << endl << endl;
			array[i][p] = -1;
		}
		for (i = p - 1; i >= b - 1 - p; i--)
		{
			if (array[a - 1 - q][i] == -1)
			{
				break; k = 0;
			}
			cout << array[a - 1 - q][i] << endl << endl;
			array[a - 1 - q][i] = -1;
		}
		for (i = a - 2 - q; i >= q; i--)
		{
			if (array[i][b - 1 - p] == -1)
			{
				break; k = 0;
			}
			cout << array[i][b - 1 - p] << endl << endl;
			array[i][b - 1 - p] = -1;
		}
		for (i = 0; i <= a - 1; i++)
		{
			for (j = 0; j <= b - 1; j++)
			{
				if (array[i][j] != -1)
					x = x * 0;
			}
		}
		if (x == 1)
			break;
		x = 1;
	}
	return 0;
}

