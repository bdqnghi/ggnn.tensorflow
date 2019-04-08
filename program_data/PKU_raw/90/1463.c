int f(int , int);
int main()
{
	int t, m, n, i, sum;
	cin >> t;
	for (i = 0; i < t; i++)
	{
		cin >> m >> n;
		sum = f(m, n);
		cout << sum << endl;
	}
	return 0;
}
int f(int m, int n)
{
	int sum;
	if (n <= 0 || m < 0)
		return 0;
	else if (m == 0)
		return 1;
	else if (n == 1 || m == 1)
		return 1; 
	sum = f(m - n, n) + f(m, n - 1);
	return sum;
}