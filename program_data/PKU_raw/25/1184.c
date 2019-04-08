
int main()
{
	char a[100];
	int n, l;
	int i;
	int k;
	int jin;
	for (i = 0; i < 100; i++)
		a[i] = '0';
	a[0] = '1';
	cin >> n;
	if (n == 0)
		cout << 1;
	else
	{
		for (i = 0; i < n; i++)
		{
		    jin = 0;
			for (int j = 0; j < 99; j++)
			{
				k = a[j] - '0';
				k = k * 2 + jin;
				jin = k / 10;
				k = k % 10;
				a[j] = '0' + k;
			}
		}
	    l = 99;
		while (a[l] == '0')
		{
			l--;
		}
		for (i = l; i > -1; i--)
			cout << a[i];
	}
	return 0;
}
