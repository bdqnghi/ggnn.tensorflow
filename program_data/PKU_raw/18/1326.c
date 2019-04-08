int a[105][105];
int guiling(int n);
void xiaojian(int n);

int main()
{
	int n, i, j, k;
	cin >> n;
	for(k = 0; k < n; k++)
	{
	    memset(a, 0, sizeof(a));
		for(i = 0; i < n; i++)
			for(j = 0; j < n; j++)
				cin >> a[i][j];
			cout << guiling(n) << endl;
	}

	return 0;
}
int guiling(int n)
{
	for(int i = 0; i < n; i++)
	{
        int min = a[i][0];
        for (int j = 1; j < n; j++)
		{
            if (a[i][j] < min)
                min = a[i][j];
		}
        for (int j = 0; j < n; j++)
            a[i][j] -= min;
	}
	for (int i = 0; i < n; i++)
    {
        int min = a[0][i];
        for (int j = 1; j < n; j++)
		{
            if (a[j][i] < min)
            min = a[j][i];
		}
        for (int j = 0; j < n; j++)
            a[j][i] -= min;
	}
	int k = a[1][1];
	if(n == 2)
		return k;
	else
	{
		xiaojian(n);
		return k + guiling(n - 1);
	}
}
void xiaojian(int n)
{
    for (int i = 1; i < n - 1; i++)
    {
        a[0][i] = a[0][i + 1];
        a[i][0] = a[i + 1][0];
        for (int j = 1; j < n - 1; j++)
            a[i][j] = a[i + 1][j + 1];
    }
}