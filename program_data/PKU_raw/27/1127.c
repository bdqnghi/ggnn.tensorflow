/**
????6
?  ?????
?  ??10.12
?  ???????????
*/


int main()
{
	int n;                           // ?????????n
	double a, b, c;                  // ????????a,b,c
	double x1, x2;                   // ????????x1,x2

	cin >> n;                        // ??n

	for(int i=1 ; i<=n ; i++)        // ????
	{
		cin >> a >> b >> c;          // ??a,b,c
	    if(b * b - 4 * a * c < 0)    // ????????
		{   
			cout << fixed;
			// ????????????????“i”???

            if(b != 0)
			{
			 cout << "x1=" << setprecision(5) << -b/(2*a) << "+" ;
	     	 cout << setprecision(5) << sqrt(4 * a * c- b * b) / (2*a) << "i;";
             cout << "x2=" << setprecision(5) << -b/(2*a) << "-" ;
		     cout << setprecision(5) << sqrt(4 * a * c- b * b) / (2*a) << "i" << endl;
			}
			//???????????????????????
			if(b == 0)
			{
			 cout << "x1=" << setprecision(5) << b/(2*a) << "+" ;
	     	 cout << setprecision(5) << sqrt(4 * a * c- b * b) / (2*a) << "i;";
             cout << "x2=" << setprecision(5) << b/(2*a) << "-" ;
		     cout << setprecision(5) << sqrt(4 * a * c- b * b) / (2*a) << "i" << endl;
			}
		}
	     if (b * b - 4 * a * c == 0)
		{	x1 = -b / (2 * a);

		    cout << fixed;
			// ?????0??x1,x2??
		    cout << "x1=x2=" << setprecision(5) <<x1 << endl;
		}

	     if (b * b - 4 * a * c > 0)
		{	
		 	x1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
			x2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
    
			cout << fixed;
			// ????????????x1,x2
            cout << "x1=" << setprecision(5) << x1 << ";" ;
			cout << "x2=" << setprecision(5) << x2 << endl;
		}
	}
	return 0;
}