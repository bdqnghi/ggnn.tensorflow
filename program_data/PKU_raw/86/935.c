int main()
{
	int n, m, i, j, k, b, c;
	int a[60] = {0};
	cin >> n;
	for(i = 1; i <= n; i ++)
	{
		cin >> m;
		b = 60 - 3 * m;
		for( j = 1; j <= m; j ++)
		{
			cin >> a[j];
		}
		if(a[m] <= b)
			cout << b << endl;
		else
		{
			for(k = 1; k <= m; k ++)
			{
				c = 60 - 3 * k;
				if(a[k] <= c && a[k + 1] >= c)
				{
					cout << c << endl;
				}
				else if(a[k] <= c && a[k + 1] <= c && a[k + 1] >= c - 3)
				{
					cout << a[k + 1] << endl;
					break;
				}
			}
		}
	}
	return 0;
}