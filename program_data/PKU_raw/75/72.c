int main()
{
	int x[1001], y[1001],i = 1, j, k, t = 0, p = 1, l, a[10000], m;
	char c;
	for (i = 1; ; i++)
	{
		cin >> x[i];
		cin.get(c);
		if (c == '\n')
			break;
	}
	for (i = 1; ; i++)
	{
		cin >> y[i];
		cin.get(c);
		if (c == '\n')
			break;
	}
	cout << i << " ";
	for (j = 1; j <= i; j++)
	{
		for (k = x[j]; k < y[j]; k++)
		{
			for (l = 1; l <= i; l++)
			{
				if (x[l] <= k && y[l] > k)
					t++;
			}
			a[p] = t;
			p++;
			t = 0;
		}
	}
	p--;
	m = a[1];
	for (j = 2; j <= p; j++)
	{
		if (m < a[j])
		{
			m = a[j];
		}
	}
	cout << m;
	return 0;
}

