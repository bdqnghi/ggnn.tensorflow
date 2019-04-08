


int main()
{
	int a[20000], b[101], c, i, j, n;
	for (i = 10;i <= 100;i++)
	{
		b[i] = 0;
	}
	cin >> n;
	for (i = 0;i < n;i++)
	{
			cin >> a[i];
			c = a[i];
			if (b[c] == 0)
				b[c]++;
			else
				a[i] = 0;
	}
	cout << a[0];
	for (j = 1;j < n;j++)
	{
			if (a[j] != 0)
				cout << " " << a[j];
	}
	

		return 0;
}
