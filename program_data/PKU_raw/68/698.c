int main()
{
	int n, a[25000], m = 4, j, q;
	double k;
	a[2] = 3;
	a[3] = 5;
	a[4] = 7;
	cin >> n;
	for (int i = 11; i <= n / 2; i = i + 2)
	{
		k = sqrt(1.0 * i);
		for (j = 2; (a[j] <= k && j <= m); j ++)
			if (i % a[j] == 0)
				break;
		if ( a[j] > k || j > m)
		{
			m ++;
			a[m] = i;
		}
	}
	for (int i = 6; i <= n; i = i + 2)
		for ( int p = 2; a[p] <= i / 2; p ++)
		{
			k = sqrt(1.0 * (i - a[p]));
			for (q = 3; q <= k; q = q + 2)
				if ((i - a[p]) % q == 0)
					break;
			if (q > k)
			{
				cout << i << '=' << a[p] << '+' << i - a[p] << endl;
				break;
			}
		}
	return 0;
}