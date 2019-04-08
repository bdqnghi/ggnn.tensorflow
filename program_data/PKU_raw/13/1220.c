int main ()
{
	int n, x, count[91] = {0};
	cin >> n;
	cin >> x;
    cout << x;
	count[x - 10]++;
	for (int i = 1; i <= n - 1; i++)
	{
		cin >> x;
		if (count[x - 10] == 0)
			cout << " " << x;
		count[x - 10]++;
	}
	return 0;
}
	