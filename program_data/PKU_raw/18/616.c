int main()
{
	int n, a[100][100], i, j, t, k, tem, min, sum;
	cin >> n;
	for(t = 0; t < n; t++)
	{
		sum = 0;
		for(i = 0; i < n; i++)
		{
			for(j = 0; j < n ; j++)
			{
				cin >> a[i][j];
			}
		}
		tem = n;
		for(k = 0; k < n - 1; k++)
		{
			for(i = 0; i < tem; i++)
			{
				min = a[i][0];
				for(j = 1; j < tem; j++)
				{
					if(min > a[i][j])
						min = a[i][j];
				}
				for(j = 0; j < tem; j++)
				{
					a[i][j] = a[i][j] - min;
				}
			}
			for(j = 0; j < tem; j++)
			{
				min = a[0][j];
				for(i = 1; i < tem; i++)
				{
					if(min > a[i][j])
						min = a[i][j];
				}
				for(i = 0; i < tem; i++)
				{
					a[i][j] = a[i][j] - min;
				}
			}
			sum = sum + a[1][1];
			for(i = 2; i < tem; i++)
			{
				for(j = 0; j < tem; j++)
				{
					a[i - 1][j] = a[i][j];
				}
			}
			for(j = 2; j < tem; j++)
			{
				for(i = 0; i < tem; i++)
				{
					a[i][j - 1] = a[i][j];
				}
			}
			tem--;
		}
		cout << sum << endl;
	}
	return 0;
}