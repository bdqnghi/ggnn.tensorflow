int main()
{
	int k;
	double a , b , c , x1 , x2 , m ,n;
	cin >> k ;
	for(int i=1 ; i <= k ; i++)
	{
	cin >> a >> b >> c;
	if(b*b-4*a*c == 0)
	{
		cout << fixed;
		cout << setprecision(5) << "x1=x2=" << (-b)/(2*a) << endl;
	}
	else
		if(b*b-4*a*c > 0)
		{
			x1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
            x2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
			cout << fixed;
			cout << setprecision(5) << "x1=" << x1 << ";" << "x2=" << x2 << endl;
		}
		else
		{
			
			m = (-b) / (2 * a);
			n = sqrt(-b * b + 4 * a * c) / (2 * a);
			if(m != 0)
			{
				cout << fixed;
				cout << setprecision(5) << "x1=" << m << "+" << n << "i" << ";" << "x2=" << m << -n << "i" << endl;
			}
			else
			{
                cout << fixed;
				cout << setprecision(5) << "x1=" << "0.00000" << "+" << n << "i" << ";" << "x2=" << "0.00000" << -n << "i" << endl;
			}

			
		}
	}
	return 0;
}
			