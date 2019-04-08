
int main()
{
	int n;
	cin >> n;
	double x1, x2, a, b, c, d;
	for (int i = 0; i < n; i++)
	{
	cin >> a >> b >> c;
	d = b * b - 4 * a * c;
	if(d == 0)
	{
		x1 = (-b + sqrt(d)) / (2 * a);
		if(x1 != 0.00000)
		    cout << fixed << setprecision(5) << "x1=x2=" << x1 << endl;
		else
            cout << fixed << setprecision(5) << "x1=x2=" << "0.00000" << endl;
	}
	if(d > 0)
	{
		x1 = (-b + sqrt(d)) / (2 * a);
        x2 = (-b - sqrt(d)) / (2 * a);
		if (x1 != 0.00000 && x2 != 0.00000)
		    cout << fixed << setprecision(5) << "x1=" << x1 << ';' << "x2=" << x2 << endl;
		if (x1 != 0.00000 && x2 == 0.00000)
			cout << fixed << setprecision(5) << "x1=" << x1 << ';' << "x2=" << "0.00000" << endl;
		if (x1 == 0.00000 && x2 != 0.00000)
		    cout << fixed << setprecision(5) << "x1=" << "0.00000" << ';' << "x2=" << x2 << endl;
	}
	if(d < 0)
	{
		if ((-b) / (2 * a) != 0.00000)
		    cout << fixed << setprecision(5) 
			     << "x1=" << (-b) / (2 * a) << '+' << sqrt(fabs(d)) / (2 * a) << "i;"
			     << "x2=" << (-b) / (2 * a) << '-' << sqrt(fabs(d)) / (2 * a) << "i" << endl;
		else
			cout << fixed << setprecision(5) 
			     << "x1=" << "0.00000" << '+' << sqrt(fabs(d)) / (2 * a) << "i;"
			     << "x2=" << "0.00000" << '-' << sqrt(fabs(d)) / (2 * a) << "i" << endl;
	} 
	}
	return 0;
}
