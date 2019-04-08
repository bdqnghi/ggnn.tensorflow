
int a[11][11] = {0};
int b[11][11] = {0};

void f(int d)
{
	if (d == 0)
		return;
	int u, v;
	for (u = 1; u <= 9; u++)
	{
		for (v = 1; v <= 9; v++)
		{
			b[u][v] = 2 * a[u][v] + a[u + 1][v] + a[u - 1][v] + a[u][v + 1] + a[u][v - 1] + a[u - 1][v - 1] + a[u - 1][v + 1] + a[u + 1][v - 1] + a[u + 1][v + 1];
		}
	}
	for (u = 1; u <= 9; u++)
	{
		for (v = 1; v <= 9; v++)
		{
			a[u][v] = b[u][v];
		}
	}
	f(d - 1);
}

int main()
{
	int n, d;
	int u, v;
	cin >> n >> d;
	a[5][5] = n;
	f(d);
	for (u = 1; u <= 9; u++)
	{
		for (v = 1; v <= 8; v++)
		{
			cout << a[u][v] << " ";
		}
		cout << a[u][9] << endl;
	}
	return 0;
}