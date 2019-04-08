int	m, n;

int	board[2][9][9] = {0};

void	fanzhi(int k)
{
	if(k == n)
	{
		return;
	}

	int	s = k % 2;
	int	i, j;
	for (i = 0; i < 9; i ++)
	{
		for (j = 0; j < 9; j ++)
		{

			board[1 - s][i - 1][j] += board[s][i][j];
			board[1 - s][i + 1][j] += board[s][i][j];
			board[1 - s][i][j - 1] += board[s][i][j];
			board[1 - s][i][j + 1] += board[s][i][j];
			board[1 - s][i + 1][j + 1] += board[s][i][j];
			board[1 - s][i - 1][j + 1] += board[s][i][j];
			board[1 - s][i + 1][j - 1] += board[s][i][j];
			board[1 - s][i - 1][j - 1] += board[s][i][j];
			board[1 - s][i][j] += board[s][i][j] * 2;

			board[s][i][j] = 0;
		}
	}

	fanzhi(k + 1);
	return;
}
int main()
{
	cin >> m;
	cin >> n;
	board[0][4][4] = m;


	fanzhi(0);


	int	i, j;
	int	p = n % 2;
	for (i = 0; i < 9; i ++)
	{
		int	shou = 0;
		for (j = 0; j < 9; j ++)
		{
			if(shou != 0)
			{
				cout << " ";
			}
			shou = 1;

			cout << board[p][i][j];
		}
		cout << endl;
	}

return 0;
}