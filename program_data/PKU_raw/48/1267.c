
int a[11][11] = {0};
int b[11][11] = {0};

void f()
{
	int u, v;
	for (u = 1; u <= 9; u++)
	{
		for (v = 1; v <= 9; v++)
		{
			b[u][v] = 2 * a[u][v] + a[u - 1][v] + a[u + 1][v] + a[u][v - 1] + a[u][v + 1] + a[u - 1][v - 1] + a[u - 1][v + 1] + a[u + 1][v - 1] + a[u + 1][v + 1];
		}
	}
	for (u = 1; u <= 9; u++)
	{
		for (v = 1; v <= 9; v++)
		{
			a[u][v] = b[u][v];
		}
	}
}

void print()
{
	int i, j;
	for(i = 1; i <= 9; i++)
	{
		for (j = 1; j <= 8; j++)
		{
			cout << a[i][j] << " ";
		}
		cout << a[i][9] << endl;
	}
	return;
}


int main()
{
	int n, m;
	cin >> n >> m;
	a[5][5] = n;
	b[5][5] = n;
	while (m > 0)
	{
		f();
		m--;
	}
	print();
	return 0;
}
