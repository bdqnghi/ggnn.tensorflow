int main()
{
	int a[101][101], b[101][101], c[101][101] = {0}, x1, y1, x2, y2, i, j, k, l;
	cin >> x1 >> y1;
	for (i = 1; i <= x1; i++)
	{
		for (j = 1; j<= y1; j++)
		{
			cin >> a[i][j];
		}
	}
	cin >> x2 >> y2;
	for (i = 1; i <= x2; i++)
	{
		for (j = 1; j <= y2; j++)
		{
			cin >> b[i][j];
		}
	}
	for (i = 1; i <= x1; i++)
	{
		for (j = 1; j <= y2; j++)
		{
			for (k = 1; k <= x2; k++)
			{
				c[i][j] = c[i][j] + a[i][k] * b[k][j];
			}
		}
	}
	for (i = 1; i <= x1; i++)
	{
		for (j = 1; j <= y2; j++)
		{
			if (i == x1 && j == y2)
			{
				cout << c[i][j];
				break;
			}
			if (j != y2)
			{
				cout << c[i][j] << " ";
			}
			else 
				cout << c[i][j] << endl;
		}
	}
	return 0;
}
