int m, n, k = 0, x[100][100] = {0};
void num(int i,int j)
{
	if (i > 0)
	{
		if (x[i - 1][j] == 1)
		{
			k++;
			x[i - 1][j] = 3;
		}
	}
	if (i < n - 1)
	{
		if (x[i + 1][j] == 1)
		{
			k++;
			x[i + 1][j] = 3;
		}
	}
	if (j > 0)
	{
		if (x[i][j - 1] == 1)
		{
			k++;
			x[i][j - 1] = 3;
		}
	}
	if (j < n - 1)
	{
		if (x[i][j + 1] == 1)
		{
			k++;
			x[i][j + 1] = 3;
		}
	}
}

int main()
{
	int i, j;
	char c;
	cin >> n;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			cin >> c;
			if (c == '@')
			{
				x[i][j] = 2;
				k++;
			}
			if (c == '.')
				x[i][j] = 1;
		}
	}
	cin >> m;
	while (m > 1)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (x[i][j] == 2)
					num(i,j);
			}
		}
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (x[i][j] == 3)
					x[i][j] = 2;
			}
		}
		m--;
	}
	cout << k << endl;
	return 0;
}