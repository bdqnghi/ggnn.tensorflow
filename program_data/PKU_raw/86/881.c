int main()
{
	int i, j, n, a[100] = {0};
	cin >> n;
	int k, sum;
	while(n != 0)
	{
		n--;
		cin >> k;
		for (i = 1; i <= k; i++)
			cin >> a[i];
		if (a[k] + 3*k <= 60)
			sum = 60 - 3*k;
		if (a[k] + 3*k > 60)
		{
			for (j = 1; j <= k; j++)
				if ((a[j] + 3*j <= 60) && (a[j+1] + 3*(j+1) > 60))
				{
				if ((60 - 3*j) > a[j+1])
					sum = a[j+1];
				if ((60 - 3*j) <= a[j+1])
					sum = 60  - 3*j;
			}
		}
			cout << sum << endl;
	}
	return 0;
}
