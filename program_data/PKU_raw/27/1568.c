int main()
{
	double a, b, c, x1, x2, n;
	cin >> n ;
	for (double k = 1 ; k <= n ; k++)
	{
			cin >> a >> b >> c ;
			x1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a) ;
            x2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a) ;
		if (sqrt(b * b - 4 * a * c) > 0)
		{
			cout << "x1=" ;
		    printf ("%.5f",x1) ;
			cout << ";" << "x2=" ;
			printf ("%.5f",x2) ;
			cout << endl ;
		}
		else
		{
			if (sqrt(b * b - 4 * a * c) == 0)
			{
				cout << "x1=x2=" ;
		        printf ("%.5f",x1) ;
				cout << endl ;
			}
			else
			{
				cout << "x1=" ;
				if (b == 0)
					printf ("%.5f",(b / (2 * a))) ;
				else
		        printf ("%.5f",(-b / (2 * a))) ;
				cout << "+" ;
				printf ("%.5f",(sqrt(abs(b * b - 4 * a * c)) / (2 * a)));
				cout << "i" << ";" ;
				cout << "x2=" ;
				if (b == 0)
					printf ("%.5f",(b / (2 * a))) ;
				else
		        printf ("%.5f",(-b / (2 * a))) ;
				cout << "-" ;
				printf ("%.5f",(sqrt(abs(b * b - 4 * a * c)) / (2 * a)));
				cout << "i" ;
				cout << endl ;
			}
		}
	}
		return 0;
}