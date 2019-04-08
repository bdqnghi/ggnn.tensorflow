
int f(int, int);

int main()
{
	int k, m, n;
	cin >> k;
	for (int i = 1; i <= k; i++)
	{	
		cin >> m >> n;
		cout << f(m, n) << endl;
	}
	return 0;
}

int f(int m, int n)
{
	if (n == 1 || m == 1 || m == 0)
		return 1;
	if (m < 0)
		return 0;
	else
		return (f(m, n - 1) + f(m - n, n));
}
