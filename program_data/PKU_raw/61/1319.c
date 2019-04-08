int f(int x)
{
	if (x > 2)
		return (f(x - 1) + f(x - 2));
	if (x == 1)
		return 1;
	if (x == 2)
		return 1;
}

int main()
{
	int n, x;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		cout << f(x) << endl;
		cout << endl;
	}
	return 0;
}