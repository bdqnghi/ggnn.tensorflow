int main()
{
	int n, i;
	double a, b, c, x1, x2;
	cin >> n;
	for( i = 1; i <= n; i++)
	{
		cin >> a >> b >> c;
		if(b * b - 4 * a * c > 0)
		{
		   	x1 = (-b + sqrt(b *b - 4 * a * c))/(2 * a);
            x2 = (-b - sqrt(b *b - 4 * a * c))/(2 * a);  
			if(x1 == -0)
			{
				x1 = 0;
			}
			if(x2 == -0)
			{
				x2 = 0;
			}
		    cout << fixed;
		    cout << "x1=" << setprecision(5) << x1 << ";" << "x2=" << setprecision(5) << x2 << endl;
		}
        if(b * b - 4 * a * c == 0)
		{
			x1 = (-b)/(2 * a);
			if(x1 == -0)
			{
				x1 = 0;
			}
			cout << fixed;
			cout << "x1=x2=" << setprecision(5) << x1 << endl;
		}
		if(b * b - 4 * a * c < 0)
        {
			x1 = (-b)/(2 * a);
			x2 = sqrt(4 * a * c - b * b)/(2 * a);
			if(x1 == -0)
			{
				x1 = 0;
			}
			if(x2 == -0)
			{
				x2 = 0;
			}
			cout << fixed;
			cout << "x1=" << setprecision(5) << x1 << "+" << setprecision(5) << x2 << "i" << ";" << "x2=" << setprecision(5) << x1 << "-" << setprecision(5) << x2 << "i" <<endl;
		}
	}
	return 0;
}