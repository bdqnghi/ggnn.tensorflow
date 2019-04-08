
int main()
{
	int n, i;
	cin >> n;
	int a[100000];
	for (i = 0; i <= n - 1; i++)
	{
		cin >> a[i];
	}
	int k, p = 0, j = 0;
	cin >> k;
	for (i = 0; i <= n - 1; i++)
	{
		if (a[i] != k)
		{
			cout << a[i];
			p = i;
			break;
		}
	}
	for (j = p + 1; j <= n - 1; j++)
	{
		if (a[j] != k)
			cout << " " << a[j];
	}
	cout << endl;

	return 0;
}
