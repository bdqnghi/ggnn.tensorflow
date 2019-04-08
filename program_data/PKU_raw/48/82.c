int maze[9][9];
int day = 0;
void search(int n)
{
	while(day != n)
	{
		day++;
		int add[9][9];
		memset(add, 0, sizeof(add));
		for (int i = 4 - day + 1; i <= 4 + day - 1; i++)
			for (int j = 4 - day + 1; j <= 4 + day - 1; j++)
			{
				add[i+1][j] += maze[i][j];
				add[i-1][j] += maze[i][j];
				add[i+1][j+1] += maze[i][j];
				add[i-1][j-1] += maze[i][j];
				add[i+1][j-1] += maze[i][j];
				add[i-1][j+1] += maze[i][j];
				add[i][j+1] += maze[i][j];
				add[i][j-1] += maze[i][j];
				add[i][j] +=  maze[i][j];
			}
		for (int i = 4 - day; i <= 4 + day; i++)
			for (int j = 4 - day; j <= 4 + day; j++)
			{
				maze[i][j] += add[i][j];
			}
	}
	return;
}
int main()
{
	int m, n;
	cin >> m >> n;
	maze[4][4] = m;
	search(n);
	for (int i = 0; i < 9; i++)
	{
		cout << maze[i][0];
		for (int j = 1; j < 9; j++)
			cout << " " << maze[i][j];
		cout << endl;
	}
	return 0;
}