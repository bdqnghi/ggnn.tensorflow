int main ()
{
	int n;
	int a[501];
	int number, k = 1;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> number;
		if (number % 2 == 1)
		{
			a[k] = number;
			k++;
		}
	}
	for (int m = 1; m <= k - 2; m++)
	{
		int p = m;
		for (int l = m + 1; l <= k - 1; l++)
		{
			if (a[p] > a[l])
		{
			int t = a[l];
			a[l] = a[p];
			a[p] = t;
		}
		}
		
	}
	for (int n = 1; n <= k - 1; n++)
	{
		if (n == 1)
			cout << a[n];
		else cout << "," << a[n];
	}
	return 0;
}


