//**************************************
//????:????                   **
//??????                        **
//???1100012763                    **
//???2011.12.31                    **
//**************************************
int main()
{
	int n , m , i , j , k , t , x , y , count;
	int day[102][102];
	char map[102][102];
	int zou[2][4] = {{0,0,1,-1},{1,-1,0,0}};

	cin >> n;
	for (i = 1; i <= n; i++)
		for (j = 1; j <= n; j++)
		{
			cin >> map[i][j];
			if (map[i][j] == '@')
				day[i][j] = 0;
			else
				day[i][j] = -1;
		}
	cin >> m;
	for (k = 1; k < m; k++)
		for (i = 1; i <= n; i++)
			for (j = 1; j <= n; j++)
			{
				if (map[i][j] == '@' && day[i][j] == (k - 1))
				{
					for (t = 0; t <= 3; t++)
					{
						x = i + zou[0][t];
						y = j + zou[1][t];
						if (map[x][y] == '.')
						{
							map[x][y] = '@';
							day[x][y] = k;
						}
					}
				}
			}
	count = 0;
	for (i = 1; i <= n; i++)
		for (j = 1; j <= n; j++)
		{
			if (map[i][j] == '@')
				count++;
		}
	cout << count;
	return 0;
}