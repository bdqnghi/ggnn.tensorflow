
int main()
{
	int n, k;
	int i, j, m, t, l, count = 0;
	int a[100000] = {0};
	cin >> n;
	for (i = 0; i <= n - 1; i++)
	{
		cin >> a[i];
	}
	cin >> k;

	for (j = 0; j <= n - 1 - count; j++)
	{
		if (a[j] == k)
		{
			for (l = 1; ;l++)
			{
				for (m = j; m <= n - 1 - count; m++)
				{
					a[m] = a[m + 1];
				}
				count++;
				if (a[j] != k)
				break;
			}
		}
	}
	
	cout << a[0];
	for (t = 1; t <= n - 1 - count; t++)
		cout <<" " << a[t];
	return 0;
}