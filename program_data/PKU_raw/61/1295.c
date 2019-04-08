
int fib(int a)
{
	if (a == 1 || a == 2)
	{
		return 1;
	}
	return fib(a - 1) + fib(a - 2);
}

int main()
{
	int a, i, n;
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cin >> a;
		cout << fib(a) << endl;
	}
	cout << endl;
	return 0;
}
