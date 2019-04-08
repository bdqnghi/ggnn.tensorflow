//#include <string>

int main()
{
	int grids[100][100]; //y x; grids: 0 noperson,1 healthyperson,2 illperson
	int n, i, j, k, day, illCount = -1, illCount0, lastIllCount = 0, illHistory[10000][2];
	char stat;
	cin >> n;
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
		{
			cin >> stat;
			switch (stat)
			{
			case '.':
				grids[i][j] = 1;
				break;
			case '#':
				grids[i][j] = 0;
				break;
			case '@':
				grids[i][j] = 2;
				illCount++;
				illHistory[illCount][0] = i;
				illHistory[illCount][1] = j;
				break;
			}
		};
	cin >> day;
	if (illCount != -1)
	{
		for (k = 1; k < day; k++)
		{
			illCount0 = illCount;
			for (i = lastIllCount; i <= illCount0; i++)
			{
				if (illHistory[i][0] != 0 && grids[illHistory[i][0] - 1][illHistory[i][1]] == 1)
				{
					grids[illHistory[i][0] - 1][illHistory[i][1]] = 2;
					illCount++;
					illHistory[illCount][0] = illHistory[i][0] - 1;
					illHistory[illCount][1] = illHistory[i][1];
				}
				if (illHistory[i][1] != 0 && grids[illHistory[i][0]][illHistory[i][1] - 1] == 1)
				{
					grids[illHistory[i][0]][illHistory[i][1] - 1] = 2;
					illCount++;
					illHistory[illCount][0] = illHistory[i][0];
					illHistory[illCount][1] = illHistory[i][1] - 1;
				}
				if (illHistory[i][0] != n - 1 && grids[illHistory[i][0] + 1][illHistory[i][1]] == 1)
				{
					grids[illHistory[i][0] + 1][illHistory[i][1]] = 2;
					illCount++;
					illHistory[illCount][0] = illHistory[i][0] + 1;
					illHistory[illCount][1] = illHistory[i][1];
				}
				if (illHistory[i][1] != n - 1 && grids[illHistory[i][0]][illHistory[i][1] + 1] == 1)
				{
					grids[illHistory[i][0]][illHistory[i][1] + 1] = 2;
					illCount++;
					illHistory[illCount][0] = illHistory[i][0];
					illHistory[illCount][1] = illHistory[i][1] + 1;
				}
			}
			lastIllCount = illCount0;
		}
	}
	cout << illCount + 1;
	return 0;
}