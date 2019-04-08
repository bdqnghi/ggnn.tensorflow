//********************************
//*???????????   **
//*?????? 1300012713 **
//*???2013.12.05  **
//********************************
int board[10][10] = {0}; //??????????
int board1[10][10] = {0};  //??????????
void day(int a, int b, int c) //?????????a??????b????c
{
	if(a == c) //?????
	{
		for(int i = 1; i <= 9; i++)
		{
			for(int j = 1; j <= 9; j++)
			{
				cout << board[i][j];
				if(j < 9)
					cout << " ";
				if(j == 9)
					cout << "\n";
			}
		}
		return;
	}
	for(int k = 1; k <= 9; k++) //??
	{
		for(int l = 1; l <= 9; l++)
		{
			if(board[k][l]!=0) //?????????????????????
			{
				if(k > 1)
					board1[k-1][l] += board[k][l];
				if(k < 9)
					board1[k+1][l] += board[k][l];
				if(l > 1)
					board1[k][l-1] += board[k][l];
				if(l < 9)
					board1[k][l+1] += board[k][l];
				if(k > 1 && l > 1)
					board1[k-1][l-1] += board[k][l];
				if(k > 1 && l < 9)
					board1[k-1][l+1] += board[k][l];
				if(k < 9 && l > 1)
					board1[k+1][l-1] += board[k][l];
				if(k < 9 && l < 9)
					board1[k+1][l+1] += board[k][l];
				board1[k][l] += board[k][l] * 2;
				board[k][l] = 0;
			}
		}
	}
	for(int p = 1; p <= 9; p++) //????????????????
	{
		for(int q = 1; q <= 9; q++)
		{
			board[p][q] = board[p][q] + board1[p][q];
			board1[p][q] = 0;
		}
	}
	day(a+1, b, c); //?????
}
int main()
{

	int m, n;
	cin >> m >> n; //??
	board[5][5] = m; //?????
	day(0,m,n); //??
	return 0;
}

