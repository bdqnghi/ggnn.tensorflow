int main ()
{
	int n = 0 ;
	int m = 0 ;
    cin >>n ;
	if ( n == 1) cout << "End" << endl ; //??n??1 ????? End
	else 
	{
		do    //?n???1?
		{
			if ( n%2 == 1)      //??n???????????
			{
				m = n ;
				n = n*3 + 1 ;
				cout  << m << "*" << 3 << "+" << 1 << "=" << n <<endl ;
			}
			else       // ????//??n???????????
			{
				m = n ;
				n = m/2 ;
				cout << m << "/" << 2 << "=" << n <<endl ;
			}
			
		}
		while ( n != 1) ;
		cout << "End" <<endl ;
	}
	return 0 ;

}