int main ()
{
	int n, i = 0, j = 0, m, num = 0;
	char grid[100][100];
	cin >> n;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			cin >> grid[i][j];
			if (grid[i][j] == '.')
				grid[i][j] = 0;
			if (grid[i][j] == '#')
				grid[i][j] = 1;
			if (grid[i][j] == '@')
				grid[i][j] = 2;
		}
	}
	cin >> m;
	while (m != 1)
	{
		for (i = 0; i < n; i++)
		{
		    for (j = 0; j < n; j++)
			{
			    if (grid[i][j] == 2)
				{
					if (grid[i - 1][j] == 0)
						grid[i - 1][j] = 3;
                    if (grid[i + 1][j] == 0)
						grid[i + 1][j] = 3;
					if (grid[i][j - 1] == 0)
						grid[i][j - 1] = 3;
					if (grid[i][j + 1] == 0)
						grid[i][j + 1] = 3;
				}

			}
		}
		
		for (i = 0; i < n; i++)
		{
		    for (j = 0; j < n; j++)
			{
			    if (grid[i][j] == 3)
				{
					grid[i][j] = 2;
				}
			}
		}
		m--;
	}
	for (i = 0; i < n; i++)
	{
		 for (j = 0; j < n; j++)
		{
			 if (grid[i][j] == 2)
			 {
				num++;
			}
		}
	}
	cout << num << endl;

return 0;

}