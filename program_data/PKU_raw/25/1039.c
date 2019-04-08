
int a[31] = {0};

void double_()
{
	int i;
	for (i = 0; i < 31; i++)
		a[i] = a[i] * 2;
	for (i = 0; i < 31; i++)
	{
		a[i + 1] += a[i] / 10;
		a[i] = a[i] % 10;
	}
}

int main()
{
	a[0] = 1;
	int n, i, j;
	cin >> n;
	for (i = 1; i <= n; i++)
		double_();
	for (i = 31; i >= 0; i--)
		if (a[i] != 0)
			break;
	for (j = i; j >= 0; j--)
		cout << a[j];
	cout << endl;
	return 0;
}
