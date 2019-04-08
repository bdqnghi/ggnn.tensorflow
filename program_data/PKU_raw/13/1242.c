
int main()
{
	int n, i, m, j;
	cin >> n;
	int a[20000];
	for (i = 0; i <= n - 1; i++ )
	{
		cin >> m;
		for (j = 0; j < i; j++ )
		{
			if (a[j] ==	m)
			{
				break;
			}
		}
		if (j == i)
		{
			a[i] = m;
		}
		else
		{
			n = n - 1;
			i = i - 1;
		}
	}
	cout << a[0];
	for (i = 1; i <= n - 1; i++ )
	{
		cout << " " << a[i];
	}

	return 0;
}