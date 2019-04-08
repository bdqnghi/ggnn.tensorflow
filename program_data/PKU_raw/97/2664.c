int main()
{
	int n, i, a[6] = {100, 50, 20, 10, 5, 1}, b[6] = {0};
	cin >> n;
	for (i = 0; i < 6; i++)
	{
		if (n >= a[i])
		{
			b[i] = n / a[i];
			n = n - b[i] * a[i];
		}
		else
			continue;
	}
	for (i = 0; i < 6; i++)
	{
		if (i < 5)
			cout << b[i] << endl;
		if (i == 5)
			cout << b[i];
	}
	return 0;
}
