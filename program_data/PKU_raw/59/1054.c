int main ( )
{
	int n, m, i, j, k, num = 0;
	char ren[102][102] = {'\0'};
	for(i = 0;i < 102;i++)
	{
		ren[i][0] = ' ';
		ren[0][i] = ' ';
	}
	cin >> n;
	for(i = 1;i <= n;i++)
	{
		for(j = 1;j <= n;j++)
		{
		   cin >> ren[i][j];
		   if(ren[i][j] == '@')
			   num++;
		}
	}
	cin >> m;
	for(k = 1;k < m;k++)
	{
		for(i = 1;i <= n;i++)
		{
			for(j = 1;j <= n;j++)
			{
				if(ren[i][j] == '@')
				{
					if(ren[i-1][j] == '.')
					{
						ren[i-1][j] = ' ';
						num++;
					}
					if(ren[i+1][j] == '.')
					{
						ren[i+1][j] = ' ';
						num++;
					}
					if(ren[i][j-1] == '.')
					{
						ren[i][j-1] = ' ';
						num++;
					}
					if(ren[i][j+1] == '.')
					{
						ren[i][j+1] = ' ';
						num++;
					}
				}
			}
		}
		for(i = 1;i <= n;i++)
		{
			for(j = 1;j <= n;j++)
			{
				if(ren[i][j] == ' ')
					ren[i][j] = '@';
			}
		}
	}
	cout << num <<endl;
	return 0;
}