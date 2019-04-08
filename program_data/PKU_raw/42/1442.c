int main()
{
	int n, i, r, s, u, m, a, t = 0;
	cin >> n;
	int num[100000] = {0};
	for (i = 0; i <= n - 1; i++)
	{
		cin >> num[i];
	}
	cin >> a;
	for (r = 0; r <= n - 1; r++)
	{
		if (num[r] == a)
		{
			t = t + 1;
		}
		if (num[r] != a)
		{
			num[r - t] = num[r];
		}
	}
	cout << num[0];
	for (m = 1; m <= n - 1 - t; m++)
	{
		cout << " " << num[m];
	}
	cout << endl;
	return 0;
}