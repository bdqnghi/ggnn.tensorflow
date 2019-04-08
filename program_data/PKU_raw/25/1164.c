
int main()
{
	int n, i, j, a[100] = {0}, temp[100] = {0};
	a[99] = 1;
	cin >> n;
	for (i = 1 ; i <= n ; i++)
	{
		for (j = 99 ; j >= 0 ; j--)
		{
			if (j != 0)
			temp[j - 1] = (a[j] * 2 + temp[j]) / 10;
			a[j] = (a[j] * 2 + temp[j]) % 10;
		}
	}
	for (i = 0 ; i < 100 ; i++)
	{
		if (a[i] != 0)
		break;
	}
	for (j = i ; j < 100 ; j++)
	{
		cout << a[j];
	}
	return 0;
}