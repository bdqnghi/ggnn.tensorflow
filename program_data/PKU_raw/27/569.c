//?????????
int main()
{
	int n = 0, i = 0;
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		double a = 0, b = 0, c = 0;
		cin >> a >> b >> c;
		double d = b * b - 4 * a * c, x1 = 0, x2 = 0, r = 0,t = 0;
		if (d >= 0)
		{
			x1 = (-b + sqrt(d)) / (2 * a);
			x2 = (-b - sqrt(d)) / (2 * a);
			if (x1 == x2)
				cout << "x1=x2=" << fixed << setprecision(5) << x1 << endl;
			else
				cout << fixed << setprecision(5) << "x1=" << x1 << ";x2=" << x2 << endl;
		}
		else
		{
			d = - d;
			r = - b / (2 * a);
			if ( r == 0)
				r = 0;
			t = sqrt(d) / (2 * a);
			cout << fixed << setprecision(5) << "x1=" << r << "+" << t << "i" << ";x2=" << r << "-" << t << "i" << endl;
		}
	}
	return 0;
}

