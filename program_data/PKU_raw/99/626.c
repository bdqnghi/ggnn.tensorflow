int main()
{
	int k, i, a = 0, b = 0, c = 0, d = 0;
	cin >> k;
	double people[100];
	for (i = 1; i <= k ; i++)
	{
		cin >> people[i];
		if (people[i] <= 18) a = a + 1;
		else if (people[i] <= 35) b = b + 1;
		else if (people[i] <= 60) c = c + 1;
		else d = d + 1;
	}
	double e, f, g, h, x;
	x = k;
	e = 100 * a / x;
	f = 100 * b / x;
	g = 100 * c / x;
	h = 100 * d / x;
	cout << "1-18: " << fixed << setprecision(2) << e << "%" << endl;
	cout << "19-35: " << fixed << setprecision(2) << f << "%" << endl;
	cout << "36-60: " << fixed << setprecision(2) << g << "%" << endl;
	cout << "60??: " << fixed << setprecision(2) << h << "%" << endl;
	return 0;
}
