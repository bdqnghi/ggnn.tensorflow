int main()
{
	int n, i, j, k = 0;
	int a[100];
         cin >> n;
	memset(a, 0, sizeof(a));
	a[0] = 1;
	if (n == 0)
		cout << "1" << endl;
	else
	{for (i = 1; i <= n; i++)
	{
		for (j = 0; j< 100; j++)
		{
			a[j] = 2* a[j];
		}
		for (j = 0;j< 100; j++)
		{
			if (a[j] > 9)
			{a[j]  = a[j] - 10;
			a[j+1]++;}
		}
	}
	for (i = 99; i >= 0;i--)
	{
		if (a[i] ==0)
			k++;
		else
			break;
	}
	for (i = 99 - k; i>=0; i--)
	{
		cout << a[i];
	}
	cout << endl;}
	return 0;
}