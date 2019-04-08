
int main ()
{
	int n, i, j ,m, num = 0, day = 1, b[101][101] = {0};
	char a[101][101];
	cin >> n;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j <n; j++)
		{
			cin >> a[i][j];
		}
	}
	cin >> m;
	while (day != m  )
	{
		for (i = 0; i <n ;i++)
		{
			for (j = 0; j <n; j++)
			{
				if (a[i][j] == '@' && b[i][j] == 0)
				{
					if ((j - 1) >= 0 && a[i][j - 1] == '.')
					{
						a[i][j - 1] = '@';
						b[i][j - 1] = 1;
					}
					if ((j + 1) < n && a[i][j + 1] == '.')
					{
						a[i][j + 1] = '@';
						b[i][j + 1] = 1;
					}
					if ((i - 1) >= 0 && a[i - 1][j] == '.')
					{
						a[i - 1][j] = '@';
						b[i - 1][j] = 1;
					}
					if ((i + 1) < n && a[i +1][j] == '.')
					{
						a[i+1][j] = '@';
						b[i+1][j] = 1;
					}
				}
			}
		}
		day++;
		for (i = 0; i <n ;i++)
		{
			for (j = 0; j <n; j++)
			{
				b[i][j] = 0;
			}
		}
	}
	for (i = 0; i <n ;i++)
	{
			for (j = 0; j <n; j++)
			{
				if (a[i][j] == '@')
					num++;
			}
	}
	cout <<num<<endl;
	return 0;
	
}