int main()
{
	double m = 1;
	int n, i;
	cin >> n;
	for (i = 1; i <= n; i++)
		m = m * 2;
	cout << setprecision(0) << fixed;
	cout << m;

}