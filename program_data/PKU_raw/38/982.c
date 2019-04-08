
int main()
{
	int t, k;
	cin >> k;
	for (t = 0; t < k; t++)
	{
		int i,n;
		cin >> n;
		double x[101],*p,sum=0,ave,ts=0;
		p = x;
		for (i = 0; i < n; i++)
		{
			cin >> *p;
			sum += *p;
			p++;
		}
		ave = sum / n;
		p = x;
		for (i = 0; i < n; i++)
		{
			ts += (*p - ave)*(*p - ave);
			p++;
		}
		double e;
		e = sqrt(ts / n);
		cout << fixed;
		cout << setprecision(5) << e << endl;
	}
	return 0;
}