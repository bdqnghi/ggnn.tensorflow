int c[25], d[25], k;
int D(int a)
{
	int m = 1;
	for (int i = a + 1; i <= k - 1; i ++)
		if (c[i] <= c[a] && m < D(i) + 1)
			m = D(i) + 1;
	return m;
}

int main()
{
	int max = 0;
	cin >> k;
	for (int i = 0; i < k; i ++)
		cin >> c[i];
	for (int i = k - 1; i >= 0; i --)
	{
		d[i] = D(i);
		if (d[i] > max)
			max = d[i];
	}
	cout << max;
	return 0;
}