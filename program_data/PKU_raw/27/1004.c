
int main(void)
{
	int n;
	double a, b, c, delta, x1, x2, img, rl;
	cin >>n;
	for (int i = 1; i <= n; i++)
	{
		cin >> a >> b >> c;
		delta = b * b - 4 * a * c;
		if (delta > 0)
		{
			x1 = (-b + sqrt(delta))/(2 * a);
			x2 = (-b - sqrt(delta))/(2 * a);
			cout << fixed << setprecision(5) << "x1=" << x1 << ";" << "x2=" << x2 << endl;
		}
		else if (delta == 0)
		{
			x1 = (-b)/(2*a);
			cout << fixed << setprecision(5) << "x1=x2=" << x1 << endl;
		}
		else
		{
			img = sqrt(-delta) / (2 * a);
			rl = (-b) / (2 * a);
			if (rl != 0)
			{
				cout << fixed << setprecision(5) << "x1=" << rl << "+" << img << "i;";
				cout << fixed << setprecision(5) << "x2=" << rl << "-" << img << "i" << endl;
			}
			else
			{
				cout << fixed << setprecision(5) << "x1=" << "0.00000" << "+" << img << "i;";
				cout << fixed << setprecision(5) << "x2=" << "0.00000" << "-" << img << "i" << endl;
			}
		}
	}
	return 0;
} 