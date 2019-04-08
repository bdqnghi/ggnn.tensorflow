//********************************
//*????????????   **
//*????? 1300012707 **
//*???2013.10.9  **
//********************************
int main()
{
	double a, b, c, r1, r2, x1, x2;
	int n;
    cin >> n;
    for ( int i = 1; i <= n; i = i + 1)
    {
		cin >> a >> b >> c;
		if ( b == 0)
        {
			b = -b;
        }
		if ( ( b * b - 4 * a * c) > 0)
        {
			x1 = ( -b + sqrt(b * b - 4 * a * c)) / ( 2 * a);
			x2 = ( -b - sqrt(b * b - 4 * a * c)) / ( 2 * a);
			cout << "x1=";
			printf("%.5f", x1);
			cout << ";x2=";
			printf("%.5f", x2);
			cout << endl;
        }
		else
        {
			if ( ( b * b - 4 * a * c) < 0)
            {
				r1 = -b / ( 2 * a);
				r2 = sqrt(4 * a * c - b * b) / ( 2 * a);
				cout << "x1=";
				printf("%.5f", r1);
				cout << "+";
				printf("%.5f", r2);
				cout << "i;x2=";
				printf("%.5f", r1);
				cout << "-";
				printf("%.5f", r2);
				cout << "i" << endl;
			}
			else
            {
				r1 = -b / ( 2 * a);
				cout << "x1=x2=";
				printf("%.5f", r1);
				cout << endl;
            }
        }
	}
	return 0;
}