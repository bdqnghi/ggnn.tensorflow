int fib(int n)
{
	if (n == 1)
		return 1;
	if (n == 2)
		return 1;
	return fib(n - 1) + fib(n - 2);
}
int main()
{
	int n, k;
	cin >> n;
	while (n--)
	{
		cin >> k;
		cout << fib(k) << endl;
	}
	return 0;
}