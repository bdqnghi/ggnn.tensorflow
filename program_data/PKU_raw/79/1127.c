int main()
{
	int a[301] = {0}, b[301] = {0}, i, n, m, k, t, count;
	while (cin >> n >> m)
	{
		if (n == 0 && m == 0)
		{
			break;
		}
		for (i = 1; i <= n; i ++)
		{
			a[i] = 1;
		}
		k = 0;
		t = 0;
		count = 1;
		while (count <= n)
		{
			k ++;
			if (k == n + 1)
			{
				k = 1;
			}
			if (a[k] != 0)
			{
				t ++;
				if (t == m)
				{
					a[k] = 0;
					b[count] = k;
					count ++;
					t = 0;
				}
			}
		}
		cout << b[n] << endl;
	}
	return 0;
}
