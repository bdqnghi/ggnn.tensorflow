int n , i, j , k , t , sum = 0 ,a[200][200] , m;
int main()
{
	cin >> n;
	for (i = 1 ; i <= n ; i++)
	{
		for (j = 0 ; j <= n - 1 ; j++)
		{
			for (k = 0 ; k <= n - 1 ; k++)
			{
				cin >> a[j][k];
			}
		}
        sum = 0;
		for (t = n ; t >= 2 ; t--)
		{
			for (j = 0 ; j <= t - 1  ; j++)
			{
				m = 1000000;
				for (k = 0 ; k <= t - 1 ; k++)
				{
					if (a[j][k] < m)
					{
						m = a[j][k];
					}
				}
				for (k = 0 ; k <= t - 1 ; k++)
				{
					a[j][k] = a[j][k] - m;
				}
			}
			for (j = 0 ; j <= t - 1  ; j++)
			{
				m = 1000000;
				for (k = 0 ; k <= t - 1 ; k++)
				{
					if (a[k][j] < m)
					{
						m = a[k][j];
					}
				}
				for (k = 0 ; k <= t - 1 ; k++)
				{
					a[k][j] = a[k][j] - m;
				}
			}
			sum = sum + a[1][1];
			for (j = 1 ; j <= t - 2 ; j++)
			{
				a[0][j] = a[0][j + 1];
				a[j][0] = a[j + 1][0];
			}
			for (j = 1 ; j <= t - 2 ; j++)
			{
				for (k = 1 ; k <= t - 2 ; k++)
				{
					a[j][k] = a[j + 1][k + 1];
				}
			}
		}
		cout << sum << endl;
	}
	return 0;
}





	