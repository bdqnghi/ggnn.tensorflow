
int main()
{
	double a, b, c, d, x1, x2;
	int i, n;
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		cin >> a >> b >> c;
		d = b * b - 4 * a * c;
		if (fabs (d) < 1E-6)
		{
			x1 = -b / (2 * a);
			cout << fixed << setprecision(5) << "x1=x2=" << x1 << endl; 
		}
		else
		{
			if (d < 0)
			{
				x1 = -b / (2 * a);
				if (fabs (x1) < 1E-6)
					x1 = fabs(x1);
				x2 = sqrt(-d) / (2 * a);
				cout << fixed << setprecision(5) << "x1=" << x1 << "+" << x2 << "i;"
				<< "x2=" << x1 << "-" << x2 << "i" << endl;
			}
			else
			{
				x1 = (-b + sqrt(d)) / (2 * a);
				x2 = (-b - sqrt(d)) / (2 * a);
				cout << fixed << setprecision(5) << "x1=" << x1 << ";" << "x2=" << x2 << endl;
			}
		}
	}

	return 0;
}

