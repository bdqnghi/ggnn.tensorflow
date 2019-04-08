//********************************
//*??  ????            *****
//*????? 1300012753     ***** 
//*???2013.10.31          *****   
//********************************
int main()
{
	int n, m, sum = 0;
	cin >> n;
	char a[100][100];
	for(int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		cin >> a[i][j];
	}
	cin >> m;
	for (int i = 2; i <= m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			for (int k = 0; k < n; k++)
			{
				if (a[j][k] == '@')
				{
					if (a[j - 1][k] == '.'&& j - 1 >= 0)
					a[j - 1][k] = 'x';
					if (a[j + 1][k] == '.' && j + 1 < n)
					a[j + 1][k] = 'x';
					if (a[j][k - 1] == '.' && k - 1 >= 0)
					a[j][k - 1] = 'x';
					if (a[j][k + 1] == '.' && k + 1 < n)
					a[j][k + 1] = 'x';
				}
			}
		}
		for (int p = 0; p < n; p++)
		{
			for (int q = 0; q < n; q++)
			{
				if (a[p][q] == 'x')
				a[p][q] = '@'; 
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i][j] == '@')
			sum++;
		}
	}
	cout << sum;
	return 0; 
}