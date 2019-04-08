
int main()
{
	int m, n;
	int a[9][9] = {0}, b[9][9] = {0};
	cin >> m >> n;
	a[4][4] = m;
	for(int i = 1; i <= n; i++)
	{
		for(int j = 0; j < 9; j++)
		{
			for(int k = 0; k < 9; k++)
			{
				if(a[j][k])
				{
					b[j][k] += 2 * a[j][k];
					b[j][k + 1] += a[j][k];
					b[j][k - 1] += a[j][k];
					b[j - 1][k] += a[j][k];
					b[j + 1][k] += a[j][k];
					b[j - 1][k - 1] += a[j][k];
					b[j - 1][k + 1] += a[j][k];
					b[j + 1][k - 1] += a[j][k];
					b[j + 1][k + 1] += a[j][k];
				}
			}
		}
		for(int j = 0; j <= 8; j++)
		{
			for(int k = 0; k <= 8; k++)
			{
				a[j][k] = b[j][k];
			}
		}
		memset(b, 0, sizeof(b));
	}
	for(int i = 0; i < 9; i++)
	{
		for(int j = 0; j < 8; j++)
		{
			cout << a[i][j] << " ";
		}
		cout << a[i][8] << "\n";
	}
	return 0;
}