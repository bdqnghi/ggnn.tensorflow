int main()
{
	int a[100][100], b[100][100], x1, y1, x2, y2, c, i, j, k, l, m;
	cin >> x1 >> y1;
	for (i = 0; i < x1 * y1; i++)
	{
		cin >> a[i / y1][i % y1];
	}
	cin >> x2 >> y2;
	for (j = 0; j < x2 * y2; j++)
	{
		cin >> b[j / y2][j % y2];
	}
	for (k = 0; k < x1; k++)
	{
		for (l = 0; l < y2; l++)
		{
			c = 0;
			for (m = 0; m < y1; m++)
			{
				c += a[k][m] * b[m][l];
			}
			if (l != 0)
				cout <<' ';
			cout << c;
			if (l == y2 - 1)
				cout << endl;
		}
	}
	return 0;
}