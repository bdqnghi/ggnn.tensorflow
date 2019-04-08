
int main()
{
	double a, b, c, d, x1, x2, t;
	int i, n;
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		cin >> a >> b >> c;
		x1 = x2 = t = 0.0;
		d = b * b - 4 * a * c;
		if (fabs(d) < 1E-6)
		{
			x1 = -1 * b / (2 * a);
			if (fabs (x1) < 1E-6)
				x1 = fabs (x1);
			cout << fixed << setprecision(5) << "x1=x2=" << x1 << endl;
		}
		else
		{	
			if (d < 0)
			{
				x1 = -1 * b / (2 * a);
				if (fabs (x1) < 1E-6)
					x1 = fabs (x1);	
				t = sqrt (fabs (d)) / (2 * a);
				cout << fixed << setprecision(5) << "x1=" << x1 << "+" << t << "i;"
					 << "x2=" << x1 << "-" << t << "i" << endl;
			}
			else
			{
				t = sqrt (d) / (2 * a);
				x1 = -1 * b / (2 * a) + t;
				x2 = -1 * b / (2 * a) - t;
				if (fabs (x1) < 1E-6)
					x1 = fabs (x1);
				if (fabs (x2) < 1E-6)
					x2 = fabs (x2);
				cout << fixed << setprecision(5) << "x1=" << x1 << ";"  << "x2=" << x2 << endl;
			}
		}
	}
				
				
				
			

	return 0;

}
