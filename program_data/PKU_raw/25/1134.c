int main()
{
	char a[1000];
	a[0] = '1';
	int flag = 0, n, m = 0;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		for (int j = m; j >= 0; j--)
		{
			a[j] = (a[j] - '0') + (a[j] - '0') + '0' + flag;
			if (a[j] > '9')
			{
				flag = 1;
				a[j] = a[j] - 10;
			}
			else
			{
				flag = 0;
			}
		}
		if (flag == 1)
		{
			for (int k = m + 1; k > 0; k--)
			{
				a[k] = a[k - 1];
			}
			a[0] = '1';
			flag = 0;
			m++;
		}
	}
	for (int l = 0; l <= m; l++)
	{
		cout << a[l];
	}
	return 0;
}