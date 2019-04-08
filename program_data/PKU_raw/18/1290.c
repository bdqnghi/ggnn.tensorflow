void make_zero(int a[100][100], int);
void reduce(int a[100][100],int);
int min(int a[100][100], int i, int p, int flag);

int main()
{
	int n, a[100][100], sum;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		sum = 0;
		for (int j = 0; j < n; j++)
		{
			for (int k = 0; k < n; k++)
			{
				cin >> a[j][k];
			}
		}
		for (int p = n - 1; p > 0; p--)
		{
			make_zero(a, p);
			sum += a[1][1];
			reduce(a, p);
		}
		cout << sum << endl;
	}
	return 0;
}

void make_zero(int a[100][100], int p)
{
	int flag = 0, m;
	for (int i = 0; i <= p; i++)
	{
		m = min(a, i, p, flag);
		for (int j = 0; j <= p; j++)
		{
			a[i][j] -= m;
		}
	}
	flag = 1;
	for (int k = 0; k <= p; k++)
	{
		m = min(a, k, p, flag);
		for (int j = 0; j <= p; j++)
		{
			a[j][k] -= m;
		}
	}
}

void reduce(int a[100][100], int p)
{
	for (int i = 0; i <= p; i++)
	{
		for (int j = 1; j < p; j++)
		{
			a[i][j] = a[i][j + 1];
		}
	}
	for (int k = 0; k < p; k++)
	{
		for (int j = 1; j < p; j++)
		{
			a[j][k] = a[j + 1][k];
		}
	}
}

int min(int a[100][100], int i, int p, int flag)
{
	int t;
	if (flag == 0)
	{
		t = a[i][0];
		for (int j = 0; j <= p; j++)
		{
			if (a[i][j] < t)
				t = a[i][j];
		}
	}
	else
	{
		t = a[0][i];
		for (int j = 0; j <= p; j++)
		{
			if (a[j][i] < t)
				t = a[j][i];
		}
	}
	return t;
}
