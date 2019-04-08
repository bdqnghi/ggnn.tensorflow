int main ()
{
	int *q;
	int i, n, flag = 1, a = 0, b = 0, num;
	cin >> n;
	for (i = 0; i < n * n; i++)
	{
		cin >> num;
		if ((num == 0) && (flag == 1))
		{
			a++;
		}
		if ((a > 0) && (num != 0))
		{
			flag = 0;
		}
		if (num == 0)
		{
			b++;
		}
	}
	cout << a * ((b - 2 * a) / 2 + 2) - b << endl;
	return 0;
}