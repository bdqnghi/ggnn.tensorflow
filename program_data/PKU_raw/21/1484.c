int main()
{
	int n, i, t[300], j, k;
	double v, a[300], sum = 0.0, max = 0.0;
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cin >> a[i];
		sum += a[i];
	}
	v = (double)sum / n;
	for (i = 0; i < n; i++)
	{
		if (max < fabs(a[i] - v))
		{
			max = fabs(a[i] - v);
			j = 0;
			t[j++] = a[i];
		}
		else if (max == fabs(a[i] - v))
			t[j++] = a[i];
	}
	for (i = 0; i < j - 1; i++)
	{
		for (k = i + 1; k < j; k++)
		{
			if (a[i] > a[k])
			{
				int temp = t[i];
				t[i] = t[k];
				t[k] = temp;
			}
		}
	}
	cout << t[0];
	for (i = 1; i < j; i++)
		cout << "," << t[i];
	cout << endl;
	return 0;
}


	
