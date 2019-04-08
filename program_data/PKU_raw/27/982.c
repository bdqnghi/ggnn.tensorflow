int main()
{
	int n;
	double a, b, c, delta ;//delta ????
	double x1, x2, x1i, x2i ;//??x1i,x2i
	cin>>n;
	for( int i=1 ; i<=n ; i++ )
	{
		 cin>>a>>b>>c ;
		 delta=b*b-4*a*c ;
		 if( delta>0 )
		 {
			 x1 = ( -b + sqrt( delta ) ) / ( 2*a ) ;
	         x2 = ( -b - sqrt( delta ) ) / ( 2*a ) ;
		     cout << fixed << setprecision(5)
		    		 << "x1=" << ( ( abs( x1 )<10e-5 )? 0:x1) << ";"
		    		 << "x2=" << ( ( abs( x2 )<10e-5 )? 0:x2) <<'\n' ;
		 }
		 else if( delta==0 )//??delta=0 ?????
		 {
			 x1 = x2 = -b / ( 2*a ) ;
			 cout<< fixed << setprecision(5) << "x1=x2=" << ( ( abs ( x1 )<10e-5 )? 0:x1) <<endl ;
		 }
		 else//delta<0?????
		 {
			 x1 = -b / ( 2*a ) ;
			 x2 = -b / ( 2*a ) ;
			 x1i = sqrt( -delta ) / ( 2*a ) ;
			 x2i = sqrt( -delta ) / ( 2*a ) ;
		     cout<< fixed << setprecision(5)
		          << "x1="  << ( ( abs ( x1 )<10e-5 )? 0:x1) << "+" << x1i << "i" << ";"
		          << "x2=" <<  ( ( abs ( x1 )<10e-5 )? 0:x1) << "-" << x2i << "i" <<endl ;

		 }
	}
return 0;
}
