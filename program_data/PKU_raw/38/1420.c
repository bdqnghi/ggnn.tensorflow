
int main()
{
	int m, n;
	double x[100], S, a;
	cin >> m;
	for (int i = 0; i < m; ++i)
	{
		cin >> n;
		a = 0;
		for (int j = 0; j < n; ++j)
		{
			cin >> *(x + j);
			a += x[j];
		}
		a /= n;
		S = 0;
		for (int j = 0; j < n; ++j)
			S += (x[j] - a) * (x[j] - a);
		S = sqrt(S / n);
		printf("%.5f\n", S);
	}
	return 0;
}