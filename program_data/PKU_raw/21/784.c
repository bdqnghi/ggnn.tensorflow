
int main()
{
	int n, i, a[10000];
	double sum = 0;
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cin>>a[i];
		sum += a[i];
	}
	double aver;
	aver = sum / n;
	int max = a[0], min = a[0];
	for (i = 1; i < n; i++)
	{
		if (a[i] > max) max = a[i];
		if (a[i] < min) min = a[i];
	}
	if (fabs((max - aver) - (aver - min)) < 1e-6 ) cout << min << "," << max;
	else if ((max - aver) > (aver - min)) cout << max;
	else cout << min;

	return 0;
}
