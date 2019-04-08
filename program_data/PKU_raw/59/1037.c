int main()
{
	int n, day = 0, num = 0, i, j;
	cin >> n;
	int a[101][101] = {0};
	char c;
	for(i = 1; i <= n; i++)
		for(j = 1; j <= n; j++)
		{
			cin >> c;
			if(c == '.')
				a[i][j] = -1; //healthy
			else
			{
				if(c == '#')
					a[i][j] = 0;//void
				else
					a[i][j] = 1;//sick
			}
		}
	int m;
	cin >> m;
	for(day = 2; day <= m; day++)
	{
		for(i = 1; i <= n; i++)
			for(j = 1; j <= n; j++)
			{
				if(a[i][j] == day - 1)
				{
					if(i >= 2 && a[i-1][j] == -1)
						a[i-1][j] = day;
					if(i <=n-1 && a[i+1][j] == -1)
						a[i+1][j] = day;
					if(j >= 2 && a[i][j-1] == -1)
						a[i][j-1] = day;
					if(j <= n- 1 && a[i][j+1] == -1)
						a[i][j+1] = day;
				}
			}
	}
	for(i = 1; i <= n; i++)
		for(j = 1; j <= n; j++)
		{
			if (a[i][j] > 0)
				num++;
		}
	cout << num << endl;
	return 0;
}
