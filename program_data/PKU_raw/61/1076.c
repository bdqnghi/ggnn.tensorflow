

int f(int);

int main()
{
	int n;
	cin >> n;

	while(n--)
	{
		int a;
		cin >> a;
		cout << f(a) << endl;
	}

	return 0;
}

int f(int x)
{
	if (x == 1 || x == 2) return 1;

	return f(x - 1) + f(x - 2);
}