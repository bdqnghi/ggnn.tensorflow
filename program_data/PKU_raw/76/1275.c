int main()
{
	int n;
	float num, a[50000], b[50000], sum = 0, min, max;
	cin >> n;
	cin >> a[0] >> b[0];
	min = a[0];
	max = b[0];
	for (int i = 1; i < n; i ++)
	{
		cin >> a[i] >> b[i];
		min = a[i] > min ? min : a[i];
		max = b[i] > max ? b[i] : max;
	}
	num = min;
	for (float j = min; j <= max; j = j + 0.5)
	{
		for (int i = 0; i < n; i ++)
		{
			if (a[i] <= j && j <= b[i])
				sum ++;
		}
		if (sum == 0)
			break;
		sum = 0;
		num = num + 0.5;
	}
	if (num == max + 0.5)
		cout << min << " " << max << endl;
	else
		cout << "no" << endl;
	return 0;
}

