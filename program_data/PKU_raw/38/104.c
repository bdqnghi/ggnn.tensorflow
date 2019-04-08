
int main()
{
	int m, n, i, j;
	double *p;
	double a[1010], sum, average, result;
	cin >> m;
	for (i = 1; i <= m; i++)
	{
		memset (a, 0, sizeof (a));
		sum = 0;
		average = 0;
		result = 0;
		cin >> n;
		p = a;
		for (j = 0; j < n; j++)
		{
			cin >> *(p + j);
			sum += *(p + j);
		}
		average = sum / n;

		sum = 0.0;
		for (j = 0; j < n; j++)
		{
			*(p + j) = pow ((*(p + j) - average), 2);
			sum += *(p + j);
		}
		average = sum / n;
		result = sqrt (average);
		cout << fixed << setprecision(5) << result << endl;
	}

	return 0;
}