/****************
??cpp1
???
2013/10/10
??(8.3) ????????? (1051)
***************/
int main()
{
	int i, n;
	double a, b, c, d, x1, x2;
	cin >> n;
	for (i = 1; i <= n; i++)//?1?n????
	{
		cin >> a >> b >> c;
		d = b * b - 4 * a *c;// ????
		if (d == 0)//????????
		{
			x1 = -b / (2*a);
		    cout << setprecision(5) << fixed << "x1=x2="<<x1 << endl;
		}
		else if ( d > 0)//?????????
		{
			x1 = (-b + sqrt(b*b-4*a*c))/(2*a);
            x2 = (-b - sqrt(b*b-4*a*c))/(2*a);
			cout << setprecision(5) << fixed << "x1=" << x1 << ";" << "x2=" << x2 <<endl;
		}
		else //?????????
		{
			if ( b == 0 )
			{
				cout << setprecision(5) << fixed << "x1=" << ( b / (2 * a)) << "+" << sqrt(4*a*c-b*b)/(2*a)<< "i;x2=" << (b / (2 * a)) << "-" << sqrt(4*a*c-b*b) / (2*a) << "i"<< endl;
			}
			else
			cout << setprecision(5) << fixed << "x1=" << ( -b / (2 * a)) << "+" << sqrt(4*a*c-b*b)/(2*a)<< "i;x2=" << (-b / (2 * a)) << "-" << sqrt(4*a*c-b*b) / (2*a) << "i"<< endl;
		}
	}
    return 0;
}
