int main()
{
	int i, j, k;
	int n, m, map[101][101] = { 0 };
	int temp[101][101] = { 0 }, cnt = 0;
	char chmap[101][101];
	cin >> n;
	for(i = 0; i < n; ++i)
		cin >> chmap[i];
	cin >> m;
	for(i = 0; i < n; ++i)
		for(j = 0; j < n; ++j)
		{
			switch(chmap[i][j])
			{
			case '.':
				map[i + 1][j + 1] = 1;
				break;
			case '#':
				map[i + 1][j + 1] = 0;
				break;
			case '@':
				map[i + 1][j + 1] = 2;
				break;
			}
		}
	for(i = 0; i < m - 1; ++i)
	{
		memset(temp, 0, sizeof(temp));
		for(j = 1; j <= n; ++j)
		{
			for(k = 1; k <= n; ++k)
			{
				temp[j][k] = map[j][k];
			}
		}
		for(j = 1; j <= n; ++j)
		{
			for(k = 1; k <= n; ++k)
			{
				if(map[j][k] == 2)
				{
					temp[j][k] = 2;
					if(map[j + 1][k] != 0)
						temp[j + 1][k] = 2;
					if(map[j - 1][k] != 0)
						temp[j - 1][k] = 2;
					if(map[j][k + 1] != 0)
						temp[j][k + 1] = 2;
					if(map[j][k - 1] != 0)
						temp[j][k - 1] = 2;
				}
			}
		}
		for(j = 1; j <= n; ++j)
		{
			for(k = 1; k <= n; ++k)
			{
				map[j][k] = temp[j][k];
			}
		}
	}
	for(i = 1; i <= n; ++i)
		for(j = 1; j <= n; ++j)
		{
			if(map[i][j] == 2)
				cnt++;
		}
	cout << cnt << endl;
	return 0;
}