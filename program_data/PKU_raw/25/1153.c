int a[40] = {0}, b[40] = {0};
void f()
{
	int i, y;
	for (i = 0; i < 40; i++)
		b[i] = 0;
	for (i = 39; i > 0; i--)
	{
		y = a[i] * 2;
		b[i - 1] += y / 10;
		b[i] += y % 10;
		if (b[i] > 9)
		{
			b[i - 1]++;
			b[i] -= 10;
		}
	}
	for (i = 0; i < 40; i++)
		a[i] = b[i];
}
int main()
{
	int n, i, j;
	cin >> n;
	a[39] = 2;
	if (n == 0)
		cout << "1" << endl;
	else
	{
		for (i = 1; i < n; i++)
			f();
		for (i = 0; ;i++)
			if (a[i] != 0)
				break;
		for (j = i; j < 40; j++)
			cout << a[j];
		cout << endl;
	}
	return 0;
}