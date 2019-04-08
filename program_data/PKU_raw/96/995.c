int main()
{
	char a[200] = {0}, b[200] = {0}, c[3] = {0};
	int num;
	cin >> a;
	int i, j, k, l = strlen(a), r;
	if (l == 1)
	{
		cout << 0 << endl << a[0];
		return 0;
	}
	for (i = 0; i < l - 1; i++)
	{
		num = 0, r = 0;
		memset(c, 0, sizeof(c[0]) * 3);
		if (i != 0)
			c[0] = a[i - 1];
		else
			c[0] = '0';
		c[1] = a[i];
		c[2] = a[i + 1];
		num = atoi(c);
		b[i + 1] = num / 13 + '0';
		r = num - (b[i + 1] - '0') * 13;
		if (r > 9)
		{
			a[i] = '1';
			a[i + 1] = r % 10 + '0';
		}
		else
		{
			a[i] = '0';
			a[i + 1] = r + '0';
		}
	}
	int p = 0;
	for(i = 1; i < l; i++)
	{
		if (b[i] != '0')
			p = 1;
		if (p == 1)
			cout << b[i];
	}
	if (p == 0)
		cout << 0;
	cout << endl << r;
	return 0;
}