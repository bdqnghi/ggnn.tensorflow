int main()
{
	int m, n, a[20][20], i, j;
	cin>>m>>n;
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			cin>>a[i][j];
		}
	}
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (i == 0)
			{
				if (j == 0)
				{
					if (a[i][j] >= a[i + 1][j] && a[i][j] >= a[i][j + 1])
						cout<<i<<' '<<j<<endl;
					else
						continue;
				}
				else if (j < n - 1)
				{
					if (a[i][j] >= a[i + 1][j] && a[i][j] >= a[i][j + 1] && a[i][j] >= a[i][j - 1])
						cout<<i<<' '<<j<<endl;
					else
						continue;
				}
				else
				{
					if (a[i][j] >= a[i + 1][j] && a[i][j] >= a[i][j - 1])
						cout<<i<<' '<<j<<endl;
					else
						continue;
				}
			}
			else if (i < m - 1)
			{
				if (j == 0)
				{
					if (a[i][j] >= a[i + 1][j] && a[i][j] >= a[i][j + 1] && a[i][j] >= a[i - 1][j])
						cout<<i<<' '<<j<<endl;
					else
						continue;
				}
				else if (j < n - 1)
				{
					if (a[i][j] >= a[i + 1][j] && a[i][j] >= a[i][j + 1] && a[i][j] >= a[i][j - 1] && a[i][j] >= a[i - 1][j])
						cout<<i<<' '<<j<<endl;
					else
						continue;
				}
				else
				{
					if (a[i][j] >= a[i + 1][j] && a[i][j] >= a[i][j - 1] && a[i][j] >= a[i - 1][j])
						cout<<i<<' '<<j<<endl;
					else
						continue;
				}
			}
			else
			{

				if (j == 0)
				{
					if (a[i][j] >= a[i - 1][j] && a[i][j] >= a[i][j + 1])
						cout<<i<<' '<<j<<endl;
					else
						continue;
				}
				else if (j < n - 1)
				{
					if (a[i][j] >= a[i - 1][j] && a[i][j] >= a[i][j + 1] && a[i][j] >= a[i][j - 1])
						cout<<i<<' '<<j<<endl;
					else
						continue;
				}
				else
				{
					if (a[i][j] >= a[i - 1][j] && a[i][j] >= a[i][j - 1])
						cout<<i<<' '<<j<<endl;
					else
						continue;
				}
			}
		}
	}
	return 0;
}


