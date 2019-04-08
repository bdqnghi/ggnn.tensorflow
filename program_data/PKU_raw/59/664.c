/* ??5?????    */
/* ??????       */
/* ???1200012834   */

int main()
{
	int m, n, i, j, day, total = 0;
	int date[103][103];   // date?????????????????
	char room[103][103];
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cin >> room[i];
	}
	cin >> m;
	for (i = n-1; i >= 0; i--)
	{
		for (j = n-1; j >= 0; j--)
		{
			room[i+1][j+1] = room[i][j];  // ???????????????????“??”
		}
	}
	for (i = 0; i <= n + 1; i = i + n + 1)
	{
		for (j = 0; j <= n + 1; j++)
		{
			room[i][j] = '#';
			room[j][i] = '#';   // ??????“??”????"#"?????
		}
	}
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			date[i][j] = 1;    // ?date???????????1
		}
	}
	for(day = 1; day < m; day++)
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= n; j++)
			{
				if (room[i][j] == '@' && date[i][j] == day)  // ????date????day????
					                                         // ?????????
				{
					if (room[i+1][j] == '.')
					{
						room[i+1][j] = '@';
						date[i+1][j] = day + 1;  // ??????????date?????day+1?
						                         // ??????????????????????
					}
					if (room[i-1][j] == '.')
					{
						room[i-1][j] = '@';
						date[i-1][j] = day + 1;
					}
					if (room[i][j+1] == '.')
					{
						room[i][j+1] = '@';
						date[i][j+1] = day + 1;
					}
					if (room[i][j-1] == '.')
					{
						room[i][j-1] = '@';
						date[i][j-1] = day + 1;
					}
				}
			}
		}
	}
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			if(room[i][j] == '@')
			{
				total ++;
			}
		}
	}
	cout << total << endl;
	return 0;
}
