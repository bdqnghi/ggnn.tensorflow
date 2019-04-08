
int res(int n, int k, int i, int p)
{
	int m;
	if (i == n)
	{
		m = n * p + k;
	}
	else
	{
		m = res(n, k, i + 1, p);
		if (m != -1 && m % (n - 1) == 0)
		{
			m = m / (n - 1) * n + k;
		}
		else
			m = -1;
	}
	return m;
}

int main()
{
	int n, k;
	cin >> n >> k;
	int i = 1;
	while(1)
	{
		int m = res(n, k, 1, i++); 
		if (m != -1)
		{
			cout << m << endl;
			break;
		}
	}
	return 0;
}
