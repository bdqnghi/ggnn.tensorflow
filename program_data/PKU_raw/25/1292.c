
char a[100];
int n, i, j, k, times = 0;
int ex[100] = {0};

int main()
{
	cin >> n;
	if (n == 0)
	{
		cout << '1';
		return 0;
	}
	for (i = 0; i != 100; i++)
	{
		if (i == 0)
			a[i] = '1';
		else
			a[i] = '0';
	}                                   //???a???1
	for (i = 1; i != n + 1; i++)
	{
		for (j = 0; j != i; j++)
		{
			if (a[j] <= '4')
				a[j] = (a[j] - '0') * 2 + '0';
			else
			{
				a[j] = (a[j] - '0') * 2 + '0' - 10;
				ex[j + 1] = 1;
			}
		}
		for (k = 0; k != n; k++)
		{
			if (ex[k] == 1)
			{	
				a[k]++;
				ex[k] = 0;
			}
		}
	}
	for (i = n - 1; i != -1; i--)
	{
		if (a[i] == '0' && times == 0)
			continue;
		else
		{
			cout << a[i];
			times++;
		}
	}
	cout << endl;

	return 0;
}
