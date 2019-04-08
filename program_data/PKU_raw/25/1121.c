//???


int main()
{
	char a[1001];
	char p = NULL;
	a[0] = '2';
	int n, i, j, k = 0, k1 = 0;
	for (i = 1; i < 1001; i++)
		a[i] = '0';
	cin >> n;
	if (n == 0)
		cout << 1 << endl;
	else
	{
	for (i = 1; i < n; i++)
		for (j = 0; j < 1001; j++)
		{
			k1 = ((a[j] - '0') * 2 + k) / 10;
			a[j] = ((a[j] - '0') * 2 + k) % 10 + '0';
			k = k1;
		}
	for (i = 1000; i >= 0; i--)
		if (a[i] != '0')
			break;
	for (; i >= 0; i--)
		cout << a[i];
	cout << endl;
	}
	return 0;
}