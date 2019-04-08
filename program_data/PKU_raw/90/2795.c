

int f(int, int);

int main()
{
	int n;
	cin >> n;

	while(n--)
	{
		int m, n;
		cin >> m >> n;

		cout << f(m, n) << endl;
	}

	return 0;
}

int f(int m, int n)
{
	if (m == 1 || n == 1 || m == 0) return 1;

	if (m < 0) return 0;

	return f(m - n, n) + f(m, n - 1);
}