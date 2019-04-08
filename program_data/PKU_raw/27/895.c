//***********************************
//*	  ????6.cpp					*
//*   ?????					*
//*   ???2013.10.9				*
//*	  ????????????      *
//***********************************
int main()
{
	int n , i ;
	double root1 , root2, a , b , c ;
	cin >> n ;
	for (i = 0 ; i < n ; i++)
	{
			cin >> a >> b >> c ;
			cout << fixed;
			if ( b * b - 4.0 * a * c > 0)
			{
				root1 = ( -b + sqrt( b * b - 4 * a * c ))/( 2 * a ) ;
				root2 = ( -b - sqrt( b * b - 4 * a * c ))/( 2 * a ) ;
				cout << setprecision(5) << "x1=" << root1 << ";x2=" << root2 << endl ;
			}
			else if ( b * b - 4.0 * a * c == 0)
			{
				cout <<  setprecision(5) << "x1=x2=" << -b/(2*a) <<endl;
			}
			else 
			{
				if (b == 0.0)
				{
					b= -b ;
				}
				root1 = sqrt( -b * b + 4 * a * c )/( 2 * a );
				root2 = sqrt( -b * b + 4 * a * c )/( 2 * a );
				cout <<  setprecision(5) << "x1=" << -b/(2*a) << "+" << root1 << "i;x2=" << -b/(2*a) << "-" << root2 << "i" << endl ;
			}
			}
	return 0 ;
}

