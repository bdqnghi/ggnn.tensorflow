
int main()
{
	int grids[9][9] = {0}, daysLeft, history[81][3], historyCount = 0, x, y;
	cin >> grids[4][4];
	for (cin >> daysLeft; daysLeft > 0; daysLeft--)
	{
		historyCount = 0;
		for (y = 0; y < 9; y++)
			for (x = 0; x < 9; x++)
				if (grids[x][y])
				{
					history[historyCount][0] = x;
					history[historyCount][1] = y;
					history[historyCount][2] = grids[x][y];
					historyCount++;
				};
		for (int i = 0; i < historyCount; i++)
		{
			x = history[i][0];
			y = history[i][1];
			int val = history[i][2];
			if (x > 0)
			{
				grids[x - 1][y] += val;
				if (y > 0)
					grids[x - 1][y - 1] += val;
				if (y < 8)
					grids[x - 1][y + 1] += val;
			}
			if (x < 8)
			{
				grids[x + 1][y] += val;
				if (y > 0)
					grids[x + 1][y - 1] += val;
				if (y < 8)
					grids[x + 1][y + 1] += val;
			}
			if (y > 0)
				grids[x][y - 1] += val;
			if (y < 8)
				grids[x][y + 1] += val;
			grids[x][y] += val;
		}
	}
	for (y = 0; y < 9; y++)
	{
		cout << grids[0][y];
		for (x = 1; x < 9; x++)
			cout << ' ' << grids[x][y];
		cout << endl;
	}
	return 0;
}