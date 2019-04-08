int Apple(int m, int n)
{
	if (m == 0 || n == 0)
		return 0;
	if (m == 1 || n == 1)
		return 1;
	if (m < n)
		return Apple(m, m);
	if (m == n)
		return Apple(m, n - 1) + 1;
	return Apple(m - n, n) + Apple(m, n - 1);
}
int main()
{
	int t, a, b;
	cin >> t;
	while (t)
	{
		cin >> a >> b;
		cout << Apple(a, b) << endl;
		t--;
	}
	return 0;
}