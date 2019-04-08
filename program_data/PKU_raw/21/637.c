int main()
{
	int n, i, j, sum = 0, num[300], flag = 0;
	double temp, average;
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cin >> num[i];
		sum += num[i];
	}
	average = (double) sum / n;
	for (i = 0; i < n; i++)
		for (j = 0; j < n - i - 1; j++)
		{
			if (num[j] > num[j+1])
			{
				temp = num[j];
				num[j] = num[j+1];
				num[j+1] = temp;
			}
		}
	temp = fabs (average - num[0]);
	for (i = 1; i < n; i++)
	{
		if (temp < fabs(average - num[i]))
			temp = fabs(average - num[i]);
	}
	for (i = 0; i < n; i++)
	{
		if (fabs((fabs(num[i] - average) - temp)) < 1e-5)
			if (flag == 0)
			{
				cout << num[i];
				flag = 1;
			}
			else
				cout << "," << num[i];
	}
	cout << endl;
	return 0;
}