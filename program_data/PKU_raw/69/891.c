

int main()
{
	char a1[251], b1[251];
	int a2[255] = { 0 }, b2[255] = { 0 }, sum[255] = { 0 };
	int a, b, i;
	cin >> a1;
	cin >> b1;
	a = strlen(a1);
	b = strlen(b1);
	for (i = 0; i < a; i++)
	{
		a2[i] = a1[a - i - 1] - '0';
	}
	for (i = 0; i < b; i++)
	{
		b2[i] = b1[b - i - 1] - '0';
	}
	for (i = 0; i < max(a, b); i++)
	{
		sum[i] = sum[i] + a2[i] + b2[i];
		if (sum[i]>9)
		{
			sum[i] -= 10;
			sum[i + 1]++;
		}
	}
	for (i = 254; ((sum[i] == 0) && (i > 0)); i--);
	for (i = i; i >= 0; i--)
	{
		cout << sum[i];
	}
	cout << endl;
	return 0;
}