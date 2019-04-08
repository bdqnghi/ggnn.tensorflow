int main()
{
	int a[50] = {0};
	int n, i, j, carry, temp;
	cin >> n;
	a[0] = 1;
	for (i = 1;i <= n;i++)
	{
		carry = 0;
		for (j = 0;j < 49;j++)
		{
			temp = floor(a[j] * 2 / 10);
			a[j] = (a[j] * 2) % 10;
			a[j] += carry;
			carry = temp;
		}
	}
	temp = 0;
	for (i = 0;i < 49;i++)
		if (a[i] != 0)
			temp = i;
	for (j = temp;j >= 0;j--)
		cout << a[j];
	cout << endl;
	return 0;
}