int main()
{
	double a , b , c , x1 , x2 ;
	int n;
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		cin >> a >> b >> c ;
		if( b * b - 4 * a * c > 0 )
		{
			x1 = ( -b + sqrt(b*b-4*a*c) )/( 2*a ) ;
            x2 = ( -b - sqrt(b*b-4*a*c) )/( 2*a ) ;
			if( x1 == 0 )
			    x1 = 0;
			if( x2 == 0)
				x2 = 0;
			cout << "x1=" ;
			printf("%.5lf", x1 );
			cout<< ";" << "x2=" ;
			printf("%.5lf\n", x2 );
		}
		else if( b * b - 4 * a * c == 0)
		{
			x1 = - b / ( 2*a );
			if( x1 == 0 )
			    x1 = 0;
			cout<<"x1=x2=";
		    printf("%.5lf\n",x1);
		}
		else
		{
			double m,n;
			m = sqrt( 4 * a * c - b * b )/( 2*a );
			n = - b / ( 2*a );
			if( b == 0)
				n = 0;
			cout << "x1=";
			printf( "%.5lf", n );
			cout << "+";
			printf( "%.5lf", m );
			cout << "i" << ";" << "x2=" ;
			printf( "%.5lf", n );
			cout << "-" ;
			printf( "%.5lf", m );
			cout << "i" << endl;
		}
	}
	return 0;
}

