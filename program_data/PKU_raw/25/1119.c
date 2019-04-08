char a[50], b[50];
void f()
{
	int i, y;
	for (i = 0; i < 50; i++)
		b[i] = '0';
	for (i = 49; i >= 0; i--)
	{
		y = (a[i] - '0') * 2;
		if (i > 0)
		{
			b[i - 1] += y / 10;
			b[i] += y % 10;
		}
		if (b[i] - '0' > 9)
		{
			b[i - 1]++;
			b[i] -= 10;
		}
	}
	for (i = 0; i < 50; i++)
		a[i] = b[i];
}
int main()
{
	int n, i, j;
	cin >> n;
	for (i = 0; i < 50; i++)
		a[i] = '0';
	a[49] = '2';
	if (n == 0)
		cout << "1" << endl;
	else if (n == 1)
		cout << "2" << endl;
	else
	{
		for (i = 1; i < n; i++)
			f();
		for (i = 0; i < 50; i++)
			if (a[i] != '0')
				break;
		for (j = i; j < 50; j++)
			cout << a[j];
		cout << endl;
	}
	return 0;
}