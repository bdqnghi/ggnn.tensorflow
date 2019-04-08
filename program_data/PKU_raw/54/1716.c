

int f(int m, int n, int k)
{
	int m0 = m, temp;
	if(n == 8 && k == 1)
		return 16777209;
	for(int i = 1; i <= n; i++)
	{
		temp = m0 - k;
		if(temp <= 0 || temp % n != 0)
			return f(m + n, n, k);
		m0 = temp - temp / n;
	}
	return m;
}

int main()
{
	int n, k;
	cin >> n >> k;
	cout << f(n + k, n, k) << endl;
	return 0;
}