int x;
int f(int n)
{
	if (n == 1 || n == 2)
	{
		x = 1;
	}
	else
	{
		x = f(n - 1) + f(n - 2);
	}
	return x;
}
int main()
{
	int n, i, a;
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		cin >> a;
		cout << f(a) << endl;
	}
	return 0;
}
	
		