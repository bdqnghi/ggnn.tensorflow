int main()
{
	int		board[100][100] = {0};
	int		boards[100][100]  = {0};
	int		i, j, n, m;
	cin >> m >> n;

	for (i = 2; i <= m + 1; i ++)
	{
		for (j = 2; j <= n + 1; j ++)
		{
			cin >> board[i][j];
		}
	}

	for (i = 2; i <= m + 1; i ++)
	{
		for (j = 2; j <= n + 1; j ++)
		{
			int	s1 = (board[i][j] >= board[i][j + 1]);
			int	s2 = (board[i][j] >= board[i][j - 1]);
			int	s3 = (board[i][j] >= board[i + 1][j]);
			int	s4 = (board[i][j] >= board[i - 1][j]);
			if(s1 + s2 + s3 + s4 == 4)
			{
				boards[i][j] = 1;
			}
		}
	}
	
	for (i = 2; i <= m + 1; i ++)
	{
		for (j = 2; j <= n + 1; j ++)
		{
			if(boards[i][j] == 1)
			{
				cout << i - 2 << " " << j - 2 << endl;
			}
		}
	
	}


return 0;
}
