
int main()
{
	int a[20001], count[101] = {0};
	int n, i;
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		cin >> a[i];
		count[a[i]]++;
	}
	cout << a[1];
	count[a[1]] = 0;
	for (i = 2 ; i <= n; i++)
	{
		if (count[a[i]] >= 1)
		{
			cout << " " << a[i];
			count[a[i]] = 0;
		}
	}
	cout << endl;
	return 0;
}