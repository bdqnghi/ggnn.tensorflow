
int a[200] = {0};

void f(int n)
{
	int i, m = 100, temp = 0;
	while (a[m] == 0)
		m--;
	if (n == 0)
	{
		for (i = m; i >= 1; i--)
			cout << a[i];
		cout << endl;
		return;
	}
	for (i = 1; i <= m; i++)
	{
		a[i] = a[i] * 2 + temp;
		temp = 0;
		if (a[i] >= 10)
		{
			temp = a[i] / 10;
			a[i] = a[i] - 10;
		}
	}
	if (temp != 0)
		a[m + 1] = temp;
	f(n - 1);
}

int main()
{
	int n;
	cin >> n;
	a[1] = 1;
	f(n);
	return 0;
}