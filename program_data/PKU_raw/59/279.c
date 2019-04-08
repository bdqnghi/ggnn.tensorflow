int flag[100][100] = {0},  n;	
char a[100][100];
int chuan(int i, int j, int count)
{
	if(flag[i][j + 1] == 0 && j < n - 1)
	{
		count++;
		flag[i][j + 1] = 3;
	}
	if(flag[i][j - 1] == 0 && j > 0)
	{
		count++;
		flag[i][j - 1] = 1;
	}
	if(flag[i - 1][j] == 0 && i > 0)
	{
		count++;
		flag[i - 1][j] = 1;
	}
	if(flag[i + 1][j] == 0 && i < n - 1)
	{
		count++;
		flag[i + 1][j] = 3;
	}
	return count;
}
int main()
{
	int i, j, k, m,count = 0;

	cin >> n;
	for (i = 0; i < n; i ++)
		for (j = 0; j < n; j++)
		{
			cin >> a[i][j];
			if (a[i][j] == '#')
				flag[i][j] = 2;
			if(a[i][j] == '@')
			{
				flag[i][j] = 1;
				count++;
			}
		}
	cin >> m;
	for(i = 1; i < m; i++)
	{
		for(j = 0; j < n; j++)
			for (k = 0; k < n; k++)
			{
				if(flag[j][k] == 1)
					count = chuan(j, k, count);
			}
		for (j = 0; j < n; j++)
			for (k = 0; k < n; k++)
				if (flag[j][k] == 3)
					flag[j][k] = 1;
	}
	cout << count << endl;
	return 0;
}