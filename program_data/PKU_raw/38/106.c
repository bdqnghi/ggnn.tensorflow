
int main()
{
	int k, n, i;
	double data[101], average, s, *p = NULL;
	cin >> k;
	for (i = 1; i <= k; i++)
	{
		cin >> n;
		average = 0;
		s = 0;
		p = data;
		for (p = data; p < data + n; p++)
		{
			cin >> *p;
			average += *p;
		}
		average = average / n;
		p = data;
		for (p = data; p < data + n; p++)
			s += (*p - average) * (*p - average);
		s = sqrt(s / n);
		cout << fixed << setprecision(5) << s << endl;
	}
	return 0;
}