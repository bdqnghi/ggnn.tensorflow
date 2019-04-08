int main()
{
	int i, k, n;
	double x[100], f, ave;
	cin >> k;
	while(k--)
	{
		cin >> n;
		f = 0;
		ave = 0;
		for(i = 0; i < n; i++)
		{
			cin >> x[i];
			ave = ave + x[i] / n;
		}
		for(i = 0; i < n; i++)
		{
			f = f + ((x[i] - ave) * (x[i] - ave)) / n;
		}
		f = sqrt(f);
		cout << fixed << setprecision(5) << f << endl;
	}
	return 0;
}
