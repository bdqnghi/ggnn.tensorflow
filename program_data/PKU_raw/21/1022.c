
int main()
{
	double a[305], b = 0;
	int i,  n, j, c;
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cin >> a[i];
		b += a[i];
	}
	b = b / n;
	for (i = 0; i < n - 1; i++)
		for (j = 0; j < n - i - 1; j++)
			if (a[j] > a[j + 1])
			{
				c = a[j];
				a[j] = a[j + 1];
				a[j + 1] = c;
			}
	if (b - a[0] > a[n - 1] - b)
		cout << a[0] << endl;
	else if (b - a[0] < a[n - 1] - b)
		cout << a[n - 1] << endl;
	else
		cout << a[0] << ","<< a[n - 1] << endl;
	return 0;
}