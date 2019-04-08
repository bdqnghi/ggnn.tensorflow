int main()
{
	int n;
	double a[41], b[41];
	char str[7];
	int p, q;
	double temp;

	cin >> n;
	p = 0; q = 0;
	for (int i = 1; i <= n; i++)
	{
		cin.get();
		cin >> str;
		if (str[0] == 'm')
		{
			p++;
			cin >> a[p];
		}
		else
		{
			q++;
			cin >> b[q];
		}
	}
	for (int i = 1; i <= p - 1; i++)
		for (int j = 1; j <= p - i; j++)
			if (a[j] > a[j + 1])
			{
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
	for (int i = 1; i <= q - 1; i++)
		for (int j = 1; j <= q - i; j++)
			if (b[j] < b[j + 1])
			{
				temp = b[j];
				b[j] = b[j + 1];
				b[j + 1] = temp;
			}
	for (int i = 1; i <= p; i++)
		cout << fixed << setprecision(2) << a[i] << " ";
	for (int i = 1; i <= q - 1; i++)
		cout << b[i] << " ";
	cout << b[q];
	return 0;
}