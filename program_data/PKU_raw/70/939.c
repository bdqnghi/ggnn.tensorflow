//????
//2010?11?13?
//1000012753 ???
int main()
{
	int i, j, n;
	double x[200], y[200], l[200][200], max;
	cin >> n;
	for (i = 0; i < n; i++)
		cin >> x[i] >> y[i];
	for (i = 0; i < n - 1; i++)
		for (j = i + 1; j < n; j++)
			l[i][j] = pow(abs(x[i] - x[j]), 2) + pow(abs(y[i] - y[j]), 2);
	max = l[0][1];
	for (i = 0; i < n - 1; i++)
		for (j = i + 1; j < n; j++)
		{
			if (max < l[i][j])
				max = l[i][j];
		}
	cout << sqrt(max) << endl;
	return 0;
}

