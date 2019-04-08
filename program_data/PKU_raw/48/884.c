int main ( )
{
	int i, j, k, m, n, jun1[9][9] = {0}, jun2[9][9] = {0};
	cin >> m >> n;
	jun1[4][4] = jun2[4][4] = m;
	for(k = 0;k < n;k++)
	{
		for(i = 0;i < 9;i++)
		{
			for(j = 0;j < 9;j++)
			{
				if(jun1[i][j] != 0)
				{
					jun2[i-1][j] += jun1[i][j];
					jun2[i+1][j] += jun1[i][j];
					jun2[i][j-1] += jun1[i][j];
					jun2[i][j+1] += jun1[i][j];
					jun2[i-1][j-1] += jun1[i][j];
					jun2[i+1][j-1] += jun1[i][j];
					jun2[i-1][j+1] += jun1[i][j];
					jun2[i+1][j+1] += jun1[i][j];//8?????????????
					jun2[i][j] = 2 * jun1[i][j] + jun2[i][j] - jun1[i][j];//??????????
				}
			}
		}
		for(i = 0;i < 9;i++)//????
		{
			for(j = 0;j < 9;j++)
				jun1[i][j] = jun2[i][j];
		}
	}
	for(i = 0;i < 9;i++)
	{
		for(j = 0;j < 9;j++)
		{
			if(j == 8)
				cout << jun1[i][j] <<endl;
			else cout << jun1[i][j] <<' ';
		}
	}
	return 0;
}