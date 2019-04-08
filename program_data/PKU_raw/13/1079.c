int main()
{
	int n, m, num[20000], i, num_cout[20000], k, j;
	cin >> n;
    for (i = 0; i < n; i++)
	{
		cin >> num[i];
	}
	num_cout[0] = num[0];
	k = 1;
	for (i = 1; i < n; i++)
	{
		m = 0;
		for (j = 0; j < k; j++)
		{
			if (num[i] == num_cout[j])
				m++;
		}
		if (m == 0)
		{
			num_cout[k] = num[i];
			k++;
		}
	}
	for (i = 0; i < k - 1; i++)
	{
		cout << num_cout[i] << " ";
	}
	cout << num_cout[k - 1];
	return 0;
}