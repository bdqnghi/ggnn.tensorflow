int main()
{
	int n, x, i;
	double a = 0, b = 0, c = 0, d = 0;
	cin >> n;
	for ( i=1 ; i<=n; i++)
	{
		cin >> x;
	    if ((x >= 1) && (x <= 18)) a = a + 100.0 / n;
	    if ((x >= 19) && (x <= 35)) b = b + 100.0 / n;
		if ((x >= 36) && (x <= 60)) c = c + 100.0 / n;
		if ((x >= 61) && (x <= 100)) d = d + 100.0 / n;
	}
	cout << fixed << setprecision(2) << "1-18: " << a << "%"<< endl << "19-35: " << b << "%"<< endl << "36-60: " << c << "%"<< endl << "60??: " << d << "%";
	return 0;
}