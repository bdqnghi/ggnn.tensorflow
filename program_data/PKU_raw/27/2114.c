double x1, x2;
void cal(double a, double b, double c)
{
	double deta = b * b - 4 * a * c;
	if (deta > 0)
	{
		x1 = (- b + sqrt(deta)) / (2 * a);
		x2 = (- b - sqrt(deta)) / (2 * a);
		cout << fixed << setprecision(5) << "x1=" << x1 << ";x2=" << x2 << endl;
	}
	else
	{
		if (deta == 0)
		{
			if(b == 0)
				x1 = 0;
			else
				x1 = - b / (2 * a);
			cout <<fixed << setprecision(5)<< "x1=x2=" << x1 << endl;
		}
		else
		{
			x1 = sqrt(-deta) / (2 * a);
			if(b == 0)
				x2 = 0;
			else
				x2 = - b / (2 * a);
			cout <<fixed << setprecision(5)<< "x1=" << x2 <<"+" << x1 << "i;x2=" <<x2
				<<"-"<<x1<<"i" << endl;
		}
	}
}

int main()
{
	int n, i;
	double a, b, c;
	cin >> n;
	for(i = 0; i < n; i++)
	{
		cin >> a >> b >> c;
		cal(a,b,c);
	}
	return 0;
}

