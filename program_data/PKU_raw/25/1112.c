int main()
{
	char a[101];
	int b[101];
	memset(a, '0', sizeof(a));
	memset(b, 0, sizeof(b));
	int n, i, j;
	cin >> n;
    if (n == 0)
		a[100] = '1';
	else
	{
		a[100] = '1';
		for (i = 1; i <= n; i++)
		{
			for (j = 100; j >= 0; j--)
			{
				a[j] = (a[j] - '0') * 2 + '0' + b[j];
				if ((a[j] - '0') >= 10)
				{
					a[j] -= 10;
					b[j - 1] = 1;
				}
			}
			memset(b, 0, sizeof(b));
		}
	}
	for (i = 0; i <= 100; i++)
	{
		if (a[i] != '0')
		{
			for (j = i; j <= 100; j++)
				cout << a[j];
			cout << endl;
			break;
		}
	}
	return 0;
}