
int main()
{
	char a[1000][40];
	int i, n, len[1000], max;
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cin >> a[i];
		len[i] = strlen(a[i]);
	}
	max = 81;
	for (i = 0; i < n; i++)
	{
		max += len[i] + 1;
		if (max > 80)
		{
			cout << endl;
			max = len[i];
			cout << a[i];
		}
		else
			cout << " " << a[i];
	}
	cout << endl;
	return 0;
}