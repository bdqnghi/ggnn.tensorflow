int main()
    {
		int a[101][101] = {0}, m, n, k, i, j, t, sum[1001] = {0};
		cin >> k;
		for (i = 1 ; i <= k ; i++)
		    {
				cin >> m >> n;
				for (t = 1 ; t <= m ; t++)
					for (j = 1 ; j <= n ; j++)
					    {
							cin >> a[t][j];
					    }
                for (j = 1 ; j <= n ; j++)
					sum[i] = sum[i] + a[1][j] + a[m][j];
				for (j = 1 ; j <= m ; j++)
				    {
					    if (j == 1 || j == m) continue;
						sum[i] = sum[i] + a[j][1] + a[j][n];
				    }
		    }
		for (i = 1 ; i <= k ; i++)
			cout << sum[i] <<endl;
		return 0;
    }