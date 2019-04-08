

int main()
{
	int k, n, i, j;
	double x[101], sum, ave, p, s;
	cin >> k;
	for(i = 1; i <= k; i ++)
	{
		sum = 0;
		p = 0;
		cin >> n;
		for(j = 1; j <= n; j ++)
		{
			cin >> x[j];
			sum = sum + x[j];
		}
		ave = sum / n;
		for(j = 1; j <= n; j ++)
			p = p + (x[j] - ave) * (x[j] - ave);
		s = sqrt(p / n);
		cout << fixed << setprecision(5) << s << endl;
	}
	return 0;
}