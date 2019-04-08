//**************************
//*???2013?12?4?     *
//*??????            *
//*???????????  *
//**************************

int board[11][11] = {0}, next[11][11] = {0};
int m, i, j, cnt = 0, days;
void spread(int days);
int main ()
{
	cin >> m >> days;
	board[5][5] = m;
	spread(days);
	for(i = 1; i <= 9; i++)
	{
		for(j = 1; j <= 9; j++)
		{
			if(j < 9)
				cout << board[i][j] << " ";
			else
				cout << board[i][j];
		}
		cout << endl;
	}
	return 0;
}

void spread(int days)
{
	if(cnt == days)
		return;
	cnt++;
	for(i = 1; i <= 9; i++)
	{
		for(j = 1; j <= 9; j++)
		{
			next[i][j] = board[i-1][j] + board[i+1][j] + board[i][j-1] + board[i][j+1] + 
				board[i+1][j+1] + board[i-1][j-1] + board[i+1][j-1] + board[i-1][j+1] + board[i][j] * 2;
		}
	}
	for(i = 1; i <= 9; i++)
	{
		for(j = 1; j <= 9; j++)
		{
			board[i][j] = next[i][j];
			next[i][j] = 0;
		}
	}
	spread(days);
}
	
