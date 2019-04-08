int main()
{
	int n, a[100][100] = {0}, i = 0, j = 0, min = 1000;
	int flag = 0, sum = 0, k = 0,l = 0;
	cin >> n;
	for (l = 0; l < n; l++)
	{
		for (i = 0; i < n * n; i++)
			cin >> a[i / n][i % n];
		for (k = 0; k < n - 1 ; k++)
		{
			for (i = 0; i < n - flag; i++)
			{
				min = 1000;
				for (j = 0; j < n - flag; j++)
				{
					if (a[i][j] < min)
						min = a[i][j];
				}
				for (j = 0; j < n - flag; j++)
					a[i][j] = a[i][j] - min;
			}
			for (j = 0; j < n - flag; j++)
			{
				min = 1000;
				for (i = 0; i < n - flag; i++)
				{
					if (a[i][j] < min)
						min = a[i][j];
				}
				for (i = 0; i < n - flag; i++)
					a[i][j] = a[i][j] - min;
			}
			sum += a[1][1];
			for (i = 0; i < n - flag; i++)
			{
				for (j = 1; j < n - 1 -flag; j++)
					a[i][j] = a[i][j + 1];
			}
			for (j = 0; j < n - flag; j++)
			{
				for (i = 1; i < n - 1 - flag; i++)
					a[i][j] = a[i + 1][j];
			}
			
			flag++;
		}
		cout << sum << endl;
		sum = 0;
		flag = 0;
	}
	return 0;
}
			

