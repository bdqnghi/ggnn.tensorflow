
int a[1010] = {0};

void f(int n)
{
	int i, u = 1000, temp = 0;
	while (a[u] == 0)
		u--;
	if (n == 0)
	{
		for (i = u; i >= 1; i--)
			cout << a[i];
		cout << endl;
		return;
	}
	for (i = 1; i <= u + 1; i++)
	{
		a[i] = a[i] * 2 + temp;
		temp = 0;
		if (a[i] >= 10)
		{
			a[i] = a[i] - 10;
			temp = 1;
		}
	}
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