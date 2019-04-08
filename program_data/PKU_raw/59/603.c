

int main()
{
	char room[101][101];
	
	int i, j, t, n, m, count;
	
	cin >> n;
	
	for(i = 0; i < n; i++)
		cin >> room[i];

	cin >> m;

	for (t = 2; t <= m; t++)
	{
		for (i = 0; i < n; i++)
		{
			for(j = 0; j < n; j++)
			{
				if(room[i][j] == '@')
				{
					if(i != 0 && room[i - 1][j] == '.')
						room[i - 1][j] = 'a';
					if((i != n - 1 ) && room[i + 1][j] == '.')
						room[i + 1][j] = 'a';
					if(j != 0 && room[i][j - 1] == '.')
						room[i][j - 1] = 'a';
					if((j != n - 1) && room[i][j + 1] == '.')
						room[i][j + 1] = 'a';
				}
			}
		}
		for (i = 0; i < n; i++)
			for(j = 0; j < n; j++)
				if(room[i][j] == 'a')
					room[i][j] = '@';
	}


	count = 0;
	
	for (i = 0; i < n; i++)
		for(j = 0; j < n; j++)
			if(room[i][j] == '@')
				count++;

    cout << count << endl;
	return 0;
}