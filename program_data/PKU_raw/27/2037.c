
int main()
{
	int num;
	float a, b, c;
	double x1, x2, tmp, m, n;
	int i;

	cin >> num;
	for(i = 0; i < num; i ++)
	{
		cin >> a >> b >> c;
		tmp = b * b - 4 * a * c;
		if (tmp > 0)
		{
			x1 = ( - b + sqrt(b * b - 4 * a * c)) / (2 * a);
			x2 = ( - b - sqrt(b * b - 4 * a * c)) / (2 * a);
			cout << "x1=" << fixed << setprecision(5) << x1;
			cout << ";x2=" << fixed << setprecision(5) << x2 << endl;
		}
		else if(tmp == 0)
		{
			x1 = ( - b ) / (2 * a);
			cout << "x1=x2=" << fixed << setprecision(5) << x1 << endl;
		}
		else
		{
			if (b != 0)
				m = ( - b) / (2 * a);
			else
				m = b / (2 * a);
			n = (sqrt( - tmp)) / (2 * a);
			cout << "x1=" << fixed << setprecision(5) << m;
			cout << "+" << fixed << setprecision(5) << n << "i;";
			cout << "x2=" << fixed << setprecision(5) << m;
			cout << "-" << fixed << setprecision(5) << n << "i";
			cout << endl;
		}
	}

	return 0;
}