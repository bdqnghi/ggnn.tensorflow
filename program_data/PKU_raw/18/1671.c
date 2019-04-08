
int a[100][100], sum = 0;

int minr(int u,int n)
{
	int i, minn = a[u][1]; 
	for (i = 1; i <= n; i++)
	{
		if (minn >= a[u][i])
			minn = a[u][i];
	}
	return minn;
}

int minc(int v, int n)
{
	int i, minn = a[1][v];
	for (i = 1; i <= n; i++)
	{
		if (minn >= a[i][v])
			minn = a[i][v];
	}
	return minn;
}

//* ???? *//
void f2(int n)
{
	int u, v;
	for (u = 2; u <= n - 1; u++)
	{
		for (v = 1; v <= n; v++)
		{
			a[u][v] = a[u + 1][v];
		}
	}
	for (v = 2; v <= n - 1; v++)
	{
		for (u = 1; u <= n; u++)
		{
			a[u][v] = a[u][v + 1];
		}
	}
	return;
}


//* ???? *//
void f1(int n)
{
	if (n == 1)
	{
		cout << sum << endl;
		return;
	}
	int u, v;
	//* row cancle *//
	for (u = 1; u <= n; u++)
	{
		int temp = minr(u, n);
		for (v = 1; v <= n; v++)
		{
			a[u][v] = a[u][v] - temp;
		}
	}
	//* col cancle *//
	for (v = 1; v <= n; v++)
	{
		int temp = minc(v, n);
		for (u = 1; u <= n; u++)
		{
			a[u][v] = a[u][v] - temp;
		}
	}
	sum = sum + a[2][2];
	f2(n);
	f1(n - 1);
}


int main()
{
	int n, i, u, v;
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		sum = 0;
		for (u = 1; u <= n; u++)
		{
			for (v = 1; v <= n; v++)
			{
				cin >> a[u][v];
			}
		}
		f1(n);
	}
	return 0;
}