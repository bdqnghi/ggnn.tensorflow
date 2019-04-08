//?????
//1000010098
//???
int sum(int m, int n, int a[][100])
{
	int i, sum = 0;
	for(i = 0;i < n; i++)
	{
		sum += *(*(a + m - 1) + i);
		sum += *((*a) + i);
	}
	for(i = 1;i <= m - 2; i++)
	{
		sum += **(a + i);
		sum += *(*(a + i) + n - 1);
	}
	return sum;
}
int main()
{
	int m, n, i, k, j, p, a[100][100];
	cin >> p;
	for(i = 1; i <= p; i++)
	{
		cin >> m >> n;
		for(j = 0; j < m; j++)
		{
			for(k = 0; k < n; k++)
			{
				cin >> a[j][k];
			}
		}
		cout << sum(m,n,a) << endl;
	}
	return 0;
}

