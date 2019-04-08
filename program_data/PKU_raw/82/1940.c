int main()
{
	int n, high, low, k = 0, g = 0;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> high >> low;
		if (high <= 140 && high >= 90 && low <= 90 && low >= 60)
			k++;
		else
		{
			if (k > g)
				g = k;
			k = 0;
		}
	}
	if (k > g)
		g = k;
	cout << g << endl;
	return 0;
}