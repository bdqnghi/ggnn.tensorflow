int main()
{
	int n;
	cin >> n;
	int a[100000];
	int i, j, k;
	for (i = 0; i<= n - 1; i++)
	{
		cin >> a[i];
	}
	cin >> k;
	for (i = n - 1; i >= 0; i--)
	{
		if (a[i] != k)
		{
			j = i;
			break;
		}
	}
	for (i = 0; i <= n - 1; i++)
	{
		if (a[i] != k)
		{	
			if (i != j)
				cout << a[i] << " ";
			else
				cout << a[i] << endl;
		}
	}
	return 0;
}