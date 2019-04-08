int main()
{
	int n, m, g = 0;
	char a[100][100];
	cin >> n;
	for(int i = 0; i <= n - 1; i ++)
		for(int j = 0; j <= n - 1; j ++)
		{
			cin >> a[i][j];
			if(j == n - 1)
				cin.get();
		}
	cin >> m;
	for(int k = 1; k <= m - 1; k ++)
	{
		for(int q = 0; q <= n - 1; q ++)
			for(int w = 0; w <= n - 1; w ++)
			{
				if(a[q][w] == '@')
				{
					if(a[q - 1][w] == '.' && q - 1 >= 0)
						a[q - 1][w] = '^';
					if(a[q + 1][w] == '.' && q + 1 <= n - 1)
						a[q + 1][w] = '^';
					if(a[q][w - 1] == '.' && w - 1 >= 0)
						a[q][w - 1] = '^';
					if(a[q][w + 1] == '.' && w + 1 <= n - 1)
						a[q][w + 1] = '^';
				}
			}
		for(int t = 0; t <= n - 1; t ++)
			for(int y = 0; y <= n - 1; y ++)
				if(a[t][y] == '^')
					a[t][y] = '@';
	}
    for(int e = 0; e <= n - 1; e ++)
		for(int r = 0; r <= n - 1; r ++)
		{
			if(a[e][r] == '@')
				g++;
		}
	cout << g;
    return 0;
}