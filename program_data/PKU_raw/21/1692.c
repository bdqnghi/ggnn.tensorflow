
int main()
{
	unsigned int a[300], n, sum = 0;
    double ave, max[100], c, big = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		sum += a[i];
	}
    ave = (double)sum / n;
	int s = 0;
	for (int j = 0; j < n; j++)
	{
		c = fabs(a[j] - ave);
		if (c == big)
		{
			s++;
			max[s] = a[j];
		}
		if (c > big)
		{
			memset(max, 0, sizeof(max));
			s = 0;
			big = c;
			max[s] = a[j];
		}
		
	}
	int temp;
	for (int k = 0; k < s; k++)
	{
		for (int p = 0; p < s - k; p++)
		{
			if (max[p] > max[p + 1])
			{
				temp = max[p];
				max[p] = max[p + 1];
				max[p + 1] = temp;
			}
		}
	}
	cout << max[0];
	for (int q = 1; q <= s; q++)
	{
		cout << ',' << max[q] << endl;
	}

	return 0;
}