int dayofy( int year )
{
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
		return 366 ;
	else return 365 ;
}
int dayofm( int day , int mon , int year )
{
	int i , temp , sum = 0 ;
	for ( i = 1 ; i < mon ; i++ )
	{
	if ( i == 2 )
	{
		if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
			temp = 29 ;
		else temp = 28 ;
	}
	else if ( i == 4 || i == 6 || i == 9 || i == 11 )
		temp = 30 ;
	else temp = 31 ;
	sum += temp ;
	}
	return sum+day ;
}
		
int main ()
{
	int syear , smon , sday , eyear , emon , eday , i , j , disyear=0 , disday=0 ;
	cin >> syear >> smon >> sday >> eyear >> emon >> eday ;
	for ( i = syear ; i < eyear ; i++ )
	{
		disyear += dayofy(i) ;
	}
	disday = dayofm( eday ,emon , eyear ) - dayofm( sday , smon ,syear ) ;
	cout << disyear+disday << endl ;
	return 0 ;
}