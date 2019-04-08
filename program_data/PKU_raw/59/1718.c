// * * * * * * * * * * * * * * *
// *???????             *
// *??????  1300013011   *
// *???2013.11.7            *
// * * * * * * * * * * * * * * *
int main()
{
	char str[101][101];
	int n, m, a[100][100], num = 0;
	int i, j;
	cin >> n;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			cin >> str[i][j];
			if (str[i][j] == '#')
				a[i][j] = 0;
			else if (str[i][j] == '.')
				a[i][j] = 1;
			else if (str[i][j] == '@')
				a[i][j] = 2;
			else
				a[i][j] = 0;
		}
	}
	cin >> m;
	for (int k = 2; k <= m; k++)
	{
		for (int h = 0; h < n; h++)
		{
			for (int l = 0; l < n; l++)
			{
				if ((h > 0) && (str[h][l] == '@') && (str[h-1][l] == '.'))
					a[h-1][l] *= 2;
				if ((h < n-1) && (str[h][l] == '@') && (str[h+1][l] == '.'))
					a[h+1][l] *= 2;
				if ((l > 0) && (str[h][l] == '@') && (str[h][l-1] == '.'))
					a[h][l-1] *= 2;
				if ((l < n-1) && (str[h][l] == '@') && (str[h][l+1] =='.'))
					a[h][l+1] *= 2;
			}
		}
		for (i = 0; i < n; i++)
			for (j = 0; j < n; j++)
			{
				if (a[i][j] >= 2)
					str [i][j] = '@';
			}
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (a[i][j] >= 2)
				num++;
		}
	}
	cout << num << endl;
	return 0;
}