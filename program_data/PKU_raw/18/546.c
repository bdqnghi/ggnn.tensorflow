int main()
{
	int a[100][100];
	int sum[101] = {0} , min;
	int i , j , k , l , h , n;
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
		for (j = 1 ; j <= n - 1 ; j++)
		{
			for (l = 0 ; l <= n - j; l++)
			{
				min = a[l][0];
				for (h = 0 ; h <= n - j ; h++)
				{
					if (min > a[l][h])
					{
						min = a[l][h];
					}
				}
				for (h = 0 ; h <= n - j ; h++)
				{
					a[l][h] = a[l][h] - min;
				}
			}
			for (l =0 ; l <= n - j ; l++)
			{
                min = a[0][l];
				for (h = 0 ; h <= n - j ; h++)
				{
					if (min > a[h][l])
					{
						min = a[h][l];
					}
				}
				for (h = 0 ; h <= n - j ; h++)
				{
					a[h][l] = a[h][l] - min;
				}
			}
			sum[i] = sum[i] + a[1][1];
			for (l = 1 ; l <= n - j - 1 ; l++)
			{
				a[0][l] = a[0][l + 1];
				a[l][0] = a[l + 1][0];
			}
			for (l = 1 ; l <= n -j - 1 ; l++)
			{
				for (h = 1 ; h <= n - j - 1 ; h++)
				{
					a[l][h] = a[l + 1][h + 1];
				}
			}
		}
	}
	for (i = 1 ; i <= n ; i++)
	{
		cout << sum[i] << endl;
	}
	return 0;
}



