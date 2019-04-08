

char room_W[102][102][2] = {0};

void Spread(int n, int k)
{
	int i, j;
	for (i = 1; i <= n; i++)
		for (j = 1; j <= n; j++)
		{
			if (room_W[i][j][k] == '@')
			{
				if (room_W[i - 1][j][k] != '#') room_W[i - 1][j][1 - k] = '@';
				if (room_W[i + 1][j][k] != '#') room_W[i + 1][j][1 - k] = '@';
				if (room_W[i][j - 1][k] != '#') room_W[i][j - 1][1 - k] = '@';
				if (room_W[i][j + 1][k] != '#') room_W[i][j + 1][1 - k] = '@';
			}
		}
}

int main()
{
	int n, m;
	cin >> n;
	int i, j;
	for (i = 1; i <= n; i++)
		for (j = 1; j <= n; j++)
		{
			cin >> room_W[i][j][0];
			room_W[i][j][1] = room_W[i][j][0];
		}
	cin >> m;
	int k = 0;
	for (i = 1; i < m; i++)
	{
		Spread(n, k);
		k = 1 - k;
	}
	int count = 0;
	for (i = 1; i <= n; i++)
		for (j = 1; j <= n; j++)
		{
			if (room_W[i][j][k] == '@')
				count++;
		};
	cout << count << endl;
	return 0;
}