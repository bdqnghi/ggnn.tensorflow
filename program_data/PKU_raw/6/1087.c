int main()
{
	int k = 0, m = 0, n = 0;//???k??????????m????n?m<100?n<100?
	int ans = 0, a = 0;
	cin >> k;
	for (int i = 0; i < k; i ++)
	{
		cin >> m >> n;
		for (int j = 0; j < m; j ++)//???
			for (int l = 0; l < n; l ++)
			{
				cin >> a;
				if (!l || l == (n - 1))
					ans += a;
				else if (!j || j == (m - 1))
					ans += a;
			}
		cout << ans << endl;
		ans = 0;
	}
	return 0;
}