int main()
{
	int n, i = 0, x, y, m;
	char s[300], a[300];
	cin >> n;
	s[0] = '1';
	for(;n > 0;n--)
	{
		x = y = 0;
		m = i + 1;
		m--;
		for(i = 0; i <= m; i++)
		{
			y = x + (s[m - i] - '0') * 2;
			a[i] = y % 10 + '0';
			x = y / 10;
		}
		if(x != 0)
			a[i] = x + '0';
		else
			i--;
		for(m = 0; m <= i; m++)
			s[m] = a[i - m];
	}
	for(m = 0; m <=i ; m++)
		cout << s[m];
	return 0;
}
