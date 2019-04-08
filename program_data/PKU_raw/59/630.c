//#include <string>
int grids[100][100][100] = {0}; //day y x; grids: 0 noperson,1 healthyperson,2 illperson

int main()
{
	int n, i, j, k, day, illCount = 0;
	char stat;
	cin >> n;
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
		{
			cin >> stat;
			switch (stat)
			{
			case '.':
				grids[0][i][j] = 1;
				break;
			case '#':
				grids[0][i][j] = 0;
				break;
			case '@':
				grids[0][i][j] = 2;
				illCount++;
				break;
			}
		};
	cin >> day;
	for (i = 1; i < day; i++)
		for (j = 0; j < n; j++)
			for(k = 0; k < n; k++)
			{
				if (grids[i - 1][j][k] == 2)
				{
					grids[i][j][k] = 2;
					if (j != 0 && grids[i - 1][j - 1][k] == 1 && grids[i][j - 1][k] != 2)
					{
						illCount++;
						grids[i][j - 1][k] = 2;
					}
					if (j != n - 1 && grids[i - 1][j + 1][k] == 1 && grids[i][j + 1][k] != 2)
					{
						illCount++;
						grids[i][j + 1][k] = 2;
					}
					if (k != 0 && grids[i - 1][j][k - 1] == 1 && grids[i][j][k - 1] != 2)
					{
						illCount++;
						grids[i][j][k - 1] = 2;
					}
					if (k != n - 1 && grids[i - 1][j][k + 1] == 1 && grids[i][j][k + 1] != 2)
					{
						illCount++;
						grids[i][j][k + 1] = 2;
					}
				}
				else
				{
					if (grids[i][j][k] != 2) 
						grids[i][j][k] = grids[i - 1][j][k];
				}
			}
	cout << illCount;
	return 0;
}