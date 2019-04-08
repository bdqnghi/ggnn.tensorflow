/**
 * @file   5.cpp
 * @author ???
 * @date   2013-11-1
 * @description
 *         ???????????
 */



int main()
{
	int a[102][102] = {0}, b[102][102], n, m, i, j, sum = 0;
	cin >> n;
	char c;

	for (i = 1; i <= n; ++i)
		for (j = 1; j <= n; ++j)
		{
			cin >> c;
			switch (c)
			{
			case '@':                    // ??????????-1??
				a[i][j] = -1;
				++sum;
				break;
			case '.':
				a[i][j] = 1;             // ??????????1??
				break;
			}
		}

	cin >> m;

	while (m)
	{
		for (i = 1; i <= n; ++i)
			for (j = 1; j <= n; ++j)
			{
				if (b[i][j] == 1 && (a[i - 1][j] == -1 || a[i + 1][j] == -1 || a[i][j - 1] == -1 || a[i][j + 1] == -1))
				{
					b[i][j] = -1;
					++sum;
				}
				else b[i][j] = a[i][j];
			}

		for (i = 1; i <= n; ++i)
			for (j = 1; j <= n; ++j)
				a[i][j] = b[i][j];

		--m;
	}

	cout << sum;

	return 0;
}