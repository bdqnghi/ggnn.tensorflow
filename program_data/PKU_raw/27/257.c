int main()
{
    int n,k;
	float a,b,c;
	double x1,x2,t,Re,Im;
	cin >> n;
	for (k = 1; k <= n; k++)
	{
		cin >> a >> b >> c;
		t = b * b - 4 * a * c;
		Re = -b / (2 * a);
		Im = sqrt(fabs(t)) / (2 * a);
		if (t > 0)
		{
			x1 = Re + Im;
			x2 = Re - Im;
			if (fabs(x1) <= 1e-5)
			{
				x1 = 0;
			}
			else if (fabs(x2) <= 1e-5)
			{
				x2 = 0;
			}
			cout << fixed << setprecision(5) << "x1=" << x1 << ";" << "x2=" << x2 << endl;
		}
		else if (t == 0)
		{
			if (fabs(Re) <= 1e-5)
			{
				x1 = 0;
			}
			else
			{
				x1 = Re;
			}
			cout << fixed << setprecision(5) << "x1=x2=" << x1 << endl;
		}
		else
		{
			if (fabs(Re) <= 1e-5)
			{
				Re = 0;
			}
			cout << fixed << setprecision(5) << "x1=" << Re << "+" << Im << "i;x2=" << Re << "-" << Im << "i" << endl;
		}
	}
	return 0;
}
