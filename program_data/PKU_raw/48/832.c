
int main()
{
	int a[11][11] = {0}, i, j, t[11][11] = {0}, m, n;
	const int move[8][2]= {-1, 0, 1, 0, 0, 1, 0, -1, -1, -1, 1, -1, 1, 1, -1, 1};
	cin >> m >> n;
	a[5][5] = m;
	while (n--)
	{
        memset(t, 0, sizeof(t));
		for (i = 1; i < 10; i++)
		{
			for (j = 1; j < 10; j++)
			{
				for (int k = 0; k < 8; k++)
				{
					t[i + move[k][0]][j + move[k][1]] += a[i][j];
				}
				t[i][j] += a[i][j];
			}
		}
		for (i = 1; i < 10; i++)
		{
			for (j = 1; j < 10; j++)
			{
				a[i][j] += t[i][j];
			}
		}
	}
	for (i = 1; i < 10; i++)
	{
		for (j = 1; j < 10; j++)
		{
			if (j > 1)
			{
				cout << " ";
			}
			cout << a[i][j];
		}
		cout << endl;
	}
	return 0;
}