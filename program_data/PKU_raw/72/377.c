int main()
{
	int a[20][20], i, j, max, m , n, flag = 1;
	cin >> m >> n;
	for(i = 0; i < m; i++)
		for(j = 0; j < n; j++)
			cin >> a[i][j];
	for(i = 0; i < m; i++)
	{
		for(j = 0; j < n; j++)
		{
			flag = 1;
			if(j - 1 >= 0)
				if(a[i][j] < a[i][j - 1])
					flag = 0;
			if(i - 1 >= 0)
				if(a[i][j] < a[i - 1][j])
					flag = 0;
			if(j + 1 < n)
				if(a[i][j] < a[i][j + 1])
					flag = 0;
			if(i + 1 < m)
				if(a[i][j] < a[i + 1][j])
					flag = 0;
			if(flag == 1)
				cout << i << ' ' << j << endl;
		}
	}
	return 0;
}