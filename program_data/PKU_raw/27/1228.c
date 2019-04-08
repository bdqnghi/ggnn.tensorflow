//********************************
//*????6.cpp   **
//*?????? 1300012966 **
//*???2013.  **
//*????????????  **
//********************************
int main()
{
	int n, i;
	double a[100], b[100], c[100], d, x1, x2, e, f;
	cin >> n;
	for (i=1; i<=n; i++)
	{
		cin >> a[i] >> b[i] >> c[i];
	} //????
	for (i=1; i<=n; i++)
	{
		d = b[i] * b[i] - 4 * a[i] * c[i]; //?????
		if (d > 0)
		{
			x1 = (- b[i] + sqrt(d)) / (2 * a[i]);
			x2 = (- b[i] - sqrt(d)) / (2 * a[i]);
			cout << "x1=";
			printf ("%.5f", x1);
			cout << ";" << "x2=";
			printf ("%.5f\n", x2); 
		} //?????????
		if (d == 0)
		{
			x1 = - b[i] / (2 * a[i]);
			if (x1 == 0)
			{
				x1 = 0;
			}
			cout << "x1=x2=";
			printf ("%.5f\n", x1);
		} //?????????
		if (d < 0)
		{
			e = - b[i] / (2 * a[i]);
			if (e == 0)
			{
				e =0;
			}
			f = sqrt(- d) / (2 * a[i]);
			cout << "x1=";
			printf ("%.5f", e);
			cout << "+";
			printf ("%.5f", f);
			cout << "i" << ";" << "x2=";
			printf ("%.5f", e);
			cout << "-";
			printf ("%.5f", f);
			cout << "i" << endl;
		} //???????
	}
	return 0;
}
	